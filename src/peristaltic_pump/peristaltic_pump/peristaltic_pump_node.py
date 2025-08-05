import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import ControllerMessage
from interfaces.msg import ControllerMessage
from interfaces.srv import PeristalticPumpService
# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS
from peristaltic_pump.ezo_peristaltic_pump import AtlasEzoPeristalticPump
from utils.log import write_log

class PeristalticPump(Node):
    """PeristalticPump Node.

    This class represents a Peristaltic Pump node in a ROS2 system.
    The node is responsible for controlling the peristaltic pump to dispense a certain amount of solution by volume.

    """
    
    BUFFER_SIZE = 4
    BUFFER_SIZE = 4
    INIT_TIMER_PERIOD = 6*60  # Time in seconds for the initialization timer
    
    def __init__(self):
        super().__init__(f'peristaltic_pump')
        self.get_logger().info('Creating node...')
        
        service_name = f'peristaltic_pump'
        callback_group = ReentrantCallbackGroup()
        
        self._pumps = {
            'ph_up': {'configured': False, 'device': None, 'id': '1'},
            'ph_down': {'configured': False, 'device': None, 'id': '2'},
            'ec_up': {'configured': False, 'device': None, 'id': '3'},
            'ph_up': {'configured': False, 'device': None, 'id': '1'},
            'ph_down': {'configured': False, 'device': None, 'id': '2'},
            'ec_up': {'configured': False, 'device': None, 'id': '3'},
        }
        self._init = True
        
        # Create the service
        self._service = self.create_service(
            PeristalticPumpService,
            service_name,
            self._service_callback,
            callback_group=callback_group
        )
        
        # Create subscriber to ph_controller topic
        self._ph_controller_subscriber = self.create_subscription(
            ControllerMessage,
            ControllerMessage,
            'ph_controller_node',
            self._controller_callback,
            self._controller_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to ph_controller_node')
        
        # Create subscriber to ec_controller topic
        self._ec_controller_subscriber = self.create_subscription(
            ControllerMessage,
            'ec_controller_node',
            self._controller_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to ec_controller_node')
        # Create subscriber to ec_controller topic
        self._ec_controller_subscriber = self.create_subscription(
            ControllerMessage,
            'ec_controller_node',
            self._controller_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to ec_controller_node')
        
        # Create initialization timer
        self._init_timer = self.create_timer(
            self.INIT_TIMER_PERIOD,
            self._init_callback,
            callback_group=callback_group
        )
        
        # Call once immediately
        self._init_callback()
        
        to_log = '🎋 PMP: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)

    def _controller_callback(self, msg: ControllerMessage):
        """Callback for the controller to send commands to the pump.
    def _controller_callback(self, msg: ControllerMessage):
        """Callback for the controller to send commands to the pump.
        
        Args:
            msg (ControllerMessage): The received command from the controller.
            msg (ControllerMessage): The received command from the controller.
        """
        self.get_logger().info(f'Received controller message to pump type: {msg.pump_type}')
        self.get_logger().info(f'Received controller message to pump type: {msg.pump_type}')
        
        if msg.warning:
            to_log = f"    ☄️  CTRL: Warning from controller: {msg.msg}. Dispensing operation skipped."
            to_log = f"    ☄️  CTRL: Warning from controller: {msg.msg}. Dispensing operation skipped."
            self.get_logger().warning(to_log)
            write_log(to_log)
        self._dispense_volume(msg.volume, msg.pump_type)
        self._dispense_volume(msg.volume, msg.pump_type)
    
    def _service_callback(
        self,
        request: PeristalticPumpService.Request,
        response: PeristalticPumpService.Response,
        ) -> PeristalticPumpService.Response:
        """Handles incoming service requests for the pump to dispense a certain volume.
        
        Args:
            request (PeristalticPumpService.Request): The service request message.
            response (PeristalticPumpService.Response): The service response message.

        Returns:
            PeristalticPumpService.Response: The updated response with error flag, message, and volume dispensed.
        """
        volume = request.volume
        pump_type = request.pump_type
        error, message = self._dispense_volume(volume=volume, pump_type=pump_type)
        response.err = error
        response.msg = message
        response.volume = volume
        return response
        
    def _init_callback(self) -> None:
        """Initialization callback to configure the pump.
        
        If the pump is successfully configured, this callback cancels itself.
        """
        if self._init:
            self._init = False
            self._init_timer.cancel()
            self.create_timer(
                self.INIT_TIMER_PERIOD,
                self._init_callback,
                callback_group=MutuallyExclusiveCallbackGroup()
            )
        
        # Call dispense_volume to check if all pumps are configured
        self._dispense_volume()
        if all(pump['configured'] for pump in self._pumps.values()):
            self._init_timer.cancel()
        
    def _handle_pump_error(self):
        return None
        ## do this later
    
    def _dispense_volume(self, volume: float=0.00, pump_type: str="0") -> tuple[bool,str]:
    def _dispense_volume(self, volume: float=0.00, pump_type: str="0") -> tuple[bool,str]:
        """Dispense specified volume.

        Args:
            volume: in mL
            pump_type: which pump to use. if pump_type == "0" then check if all pumps configured
            pump_type: which pump to use. if pump_type == "0" then check if all pumps configured
            
        Returns:
            bool: error flag - True if an error occured, False otherwise.
            str: message
        """
        all_pumps_clear = True
        # If not all pumps are configured:
        if not all(pump['configured'] for pump in self._pumps.values()):
            err = self._configure_device()  # Configure all pumps
            if err:
                all_pumps_clear = False
                # Find keys where 'configured' is False
                error_keys = [key for key, pump in self._pumps.items() if not pump['configured']]
                # Log pumps which are not correctly configured
                to_log = f"    ☄️ PMP: Error configuring the following pump(s): {error_keys}. Please check wiring."
                write_log(to_log)
                self.get_logger().warning(to_log)
        
        # Check pump type:
        if pump_type == "0":
        # Check pump type:
        if pump_type == "0":
            return all_pumps_clear, "All pumps configured" if all_pumps_clear else "Some pump not configured correct."
        elif pump_type not in self._pumps:
            to_log = f"    ☄️ PMP: Error; '{pump_type}' pump not found."
            write_log(to_log)
            self.get_logger().info(to_log)
            return True, to_log
        
        pump = self._pumps[pump_type]  # The value at [pump_type] key
        pump = self._pumps[pump_type]  # The value at [pump_type] key
        if pump['configured'] and pump['device'] is not None:
                # Call the pump object to dispense volume
                if volume < 0.5:  # If volume is less than 0.5mL, the minimum volume the pump can dispense
                    to_log = f"   ⚙️ PMP: {'pH' if pump_type == 'ph_down' or pump_type == 'ph_up' else 'EC'} in range or volume too small, skipped dispensing."
                    self.get_logger().info(f"{to_log}\n\n\n")
                    write_log(to_log)
                    return False, to_log
                err, msg = pump['device']._dispense_volume(volume)
                self.get_logger().info(f"Trying to dispense...")
                if err:
                    to_log = f"    ☄️⚙️ PMP: Error dispensing - {pump_type} pump at ID '{pump['id']}'."
                    write_log(to_log)
                    self.get_logger().info(to_log)
                to_log = f"            ⚙️ PMP: Dispensed {volume:.5f} mL of {pump_type} at address {hex(pump['device']._i2c_address)}"
                self.get_logger().info(f"{to_log}\n\n\n")
                write_log(to_log)
                return err, to_log
        to_log = f"    ☄️⚙️ PMP: Error- pump[{pump_type}] at ID '{pump['id']}' could not be configured. Check wiring to troubleshoot further."
        write_log(to_log)
        self.get_logger().info(to_log)
        return True, to_log
    
    def _configure_device(self) -> bool:
        """Configures the pump.

        Returns:
            bool: Error flag; True if configuration failed, False otherwise.
        """
        
        # Create pump objects
        pump1 = AtlasEzoPeristalticPump(0x5a)
        pump2 = AtlasEzoPeristalticPump(0x5b)
        pump3 = AtlasEzoPeristalticPump(0x5c)
        
        # Detect I2C bus and detect device
        err1, msg1 = pump1._dispense_volume()
        err2, msg2 = pump2._dispense_volume()
        err3, msg3 = pump3._dispense_volume()
        
        # Store both the pump object and metadata in one dict
        self._pumps['ph_up']['configured'] = not err1
        self._pumps['ph_up']['device'] = pump1
        self._pumps['ph_down']['configured'] = not err2
        self._pumps['ph_down']['device'] = pump2
        self._pumps['ec_up']['configured'] = not err3
        self._pumps['ec_up']['device'] = pump3
        self._pumps['ph_up']['configured'] = not err1
        self._pumps['ph_up']['device'] = pump1
        self._pumps['ph_down']['configured'] = not err2
        self._pumps['ph_down']['device'] = pump2
        self._pumps['ec_up']['configured'] = not err3
        self._pumps['ec_up']['device'] = pump3
        
        # Check for errors
        if err1 or err2 or err3:
        if err1 or err2 or err3:
            return True  # ERROR
        
        return False

def main(args=None):
    """Main entry point for the PeristalticPump node."""
    rclpy.init(args=args)

    node = PeristalticPump()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()