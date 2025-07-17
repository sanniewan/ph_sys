import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import PhControllerMessage
from interfaces.srv import PeristalticPumpService
# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS
from peristaltic_pump.ezo_peristaltic_pump import AtlasEzoPeristalticPump
from utils.log import write_log

class PeristalticPump(Node):
    """PeristalticPump Node.

    This class represents a Peristaltic Pump node in a ROS2 system.
    The node is responsible for controlling the peristaltic pump to dispense a certain amount of solution by volume.

    """
    
    BUFFER_SIZE = 10
    INIT_TIMER_PERIOD = 60  # Time in seconds for the initialization timer
    
    def __init__(self):
        super().__init__(f'peristaltic_pump')
        self.get_logger().info('Creating node...')
        
        service_name = f'peristaltic_pump'
        callback_group = ReentrantCallbackGroup()
        
        self._pumps = {
            '1': {'configured': False, 'device': None, 'type': 'ph_up'},
            '2': {'configured': False, 'device': None, 'type': 'ph_down'},
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
            PhControllerMessage,
            'ph_controller_node',
            self._ph_controller_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to ph_controller_node')
        
        
        # Create initialization timer
        self._init_timer = self.create_timer(
            5*60,
            self._init_callback,
            callback_group=callback_group
        )
        
        # Call once immediately
        self._init_callback()
        
        self.get_logger().info('Node created successfully.')

    def _ph_controller_callback(self, msg: PhControllerMessage):
        """Callback for the pH controller to send commands to the pump.
        
        string   pump_id
        bool     warning
        string   msg
        float32  volume
        
        Args:
            msg (PhControllerMessage): The received command from the pH controller.
        """
        self.get_logger().info(f'Received controller message to pump id: {msg.pump_id}')
        
        if msg.warning:
            self.get_logger().warning(f'Received warning from ph controller: {msg.msg}')
            write_log(f'Received warning from ph controller: {msg.msg}. Dispensing operation skipped.')
        self._dispense_volume(msg.volume, msg.pump_id)
    
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
        error, message, volume = self._dispense_volume()
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
    
    def _dispense_volume(self, volume: float=0.00, pump_id: str="0") -> tuple[bool,str]:
        """Dispense specified volume.

        Args:
            volume: in mL
            pump_id: which pump to use. if pump_id == "0" then dispense 0 to all
        Returns:
            bool: error flag - True if an error occured, False otherwise.
            str: dispense status ?D,-40.50,0
        """
        all_pumps_clear = True
        # If not all pumps are configured:
        if not all(pump['configured'] for pump in self._pumps.values()):
            err = self._configure_device()  # Configure all pumps
            self.get_logger().info(f"Configuring the following pump(s): {self._pumps.values()}")
            if err:
                all_pumps_clear = False
                # Find keys where 'configured' is False
                error_keys = [key for key, pump in self._pumps.items() if not pump['configured']]
                
                # Log pumps which are not correctly configured
                self.get_logger().warning(f"Error configuring the following pump(s): {error_keys}")
                
        if pump_id == "0":
            return all_pumps_clear, "All pumps configured" if all_pumps_clear else "Some pump not configured correct."
        
        # Check if pump_id exists
        if pump_id not in self._pumps:
            self.get_logger().info(f"Error: pump_id '{pump_id}' not found.")
            return True, f"Error: pump_id '{pump_id}' not found."

        pump = self._pumps[pump_id]  # The value at pump_id key
        if pump['configured'] and pump['device'] is not None:
                # Call the pump object to dispense volume
                err, msg = pump['device']._dispense_volume(volume)
                self.get_logger().info(f"Trying to dispense...")
                if err:
                    self.get_logger().info(f"Error dispensing at {self._solution_type} pump, address {pump['device']._i2c_address}.\n\n\n")
                
                self.get_logger().info(f"Successfully dispensed {volume:.2f} mL at address {hex(pump['device']._i2c_address)}.\n\n\n")
                self.get_logger().info("About to write to log...")
                write_log(f"Dispensed {volume:.5f} mL of {pump['type']}")
                return err, msg
            
        return True, f"Error: pump[{pump_id}] could not be configured. Check wiring to troubleshoot further."
                
    
    def _configure_device(self) -> bool:
        """Configures the pump.

        Returns:
            bool: Error flag; True if configuration failed, False otherwise.
        """
        
       # Create pump objects
        pump1 = AtlasEzoPeristalticPump(0x5a)
        pump2 = AtlasEzoPeristalticPump(0x5b)
        
        # Store both the pump object and metadata in one dict
        self._pumps['1']['configured'] = not pump1.error
        self._pumps['1']['device'] = pump1
        
        self._pumps['2']['configured'] = not pump2.error
        self._pumps['2']['device'] = pump2
        
        
        # Check for errors
        if pump1.error or pump2.error:
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