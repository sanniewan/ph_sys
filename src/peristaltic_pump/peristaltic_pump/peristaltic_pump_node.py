import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import PhControllerMessage
from interfaces.srv import PeristalticPumpService
# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS
from peristaltic_pump.ezo_peristaltic_pump import AtlasEzoPeristalticPump


class PeristalticPump(Node):
    """PeristalticPump Node.

    This class represents a Peristaltic Pump node in a ROS2 system.
    The node is responsible for controlling the peristaltic pump to dispense a certain amount of solution by volume.

    """
    
    BUFFER_SIZE = 10
    INIT_TIMER_PERIOD = 60  # Time in seconds for the initialization timer
    
    def __init__(self, solution_type: str):
        super().__init__(f'{solution_type}_peristaltic_pump')
        self.get_logger().info('Creating node...')
        
        service_name = f'{solution_type}_peristaltic_pump'
        callback_group = ReentrantCallbackGroup()
        
        self._solution_type = solution_type
        # self._device_is_configured = {}
        self._pumps = {
            '1': {'configured': False, 'device': None},
            '2': {'configured': False, 'device': None},
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
        # Create initialization timer
        self._init_timer = self.create_timer(
            30,
            self._init_callback,
            callback_group=callback_group
        )
    def is_configured(self, pump_id):
        return self._pumps.get(pump_id, {}).get('configured', False)

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
        
    def _ph_controller_callback(self, msg: PhControllerMessage):
        """Callback for the pH controller to send commands to the pump.
        
        string   pump_id
        bool     warning
        string   msg
        float32  volume
        
        Args:
            msg (PhControllerMessage): The recieved command from the pH controller.
        """
        self.get_logger().info(f'Received controller message to pump id: {msg.pump_id}')
        
        if msg.warning:
            self.get_logger().warning(f'Received warning from ph controller: {msg.msg}')
        self._dispense_volume(msg.pump_id, msg.volume)
    
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
        
        self._dispense_volume(0.00, "0")
        if self._device_is_configured:
            self._init_timer.cancel()
        
    def _handle_pump_error(self):
        return None
        ## do this later
    
    def _dispense_volume(self, volume: float, pump_id: str="0") -> tuple[bool,str]:
        """Dispense specified volume.

        Args:
            volume: in mL
            pump_id: which pump to use. if pump_id == "0" then dispense 0 to all
        Returns:
            bool: error flag - True if an error occured, False otherwise.
            str: dispense status ?D,-40.50,0
        """
        """
        if pump id = 0:
            dispense 0.00 on all pumps
        else:
            if pump id is not configured:
                configure all pumps
                check for error on THIS pump
                set configured = True on the configure method
            else: log success
        
        find right device in list (do in configure method) and device.hardware dispense volume (vol)
                
        """
        pump = self._pumps[pump_id]  # the pump at pump_id
        
        if pump_id == "0":  # signals to all pumps to dispense 0 mL
            for pdata in self._pumps.values():
                if pdata["configured"] and pdata["device"] is not None:
                    pdata["device"]._dispense_volume(0.00)
            return False, f"Successfully dispensed 0.00 mL at all pumps."
        else:
            if not pump['configured']:  # if our pump is not configured yet
                err = self._configure_device()  # configure all pumps
                if err or not pump['configured']:  # if it's still not configured
                    self.get_logger().warning(f"Error configuring pump {pump_id}")  # log warning
                    return True, f"Error configuring pump {pump_id}"
                else:
                    self.get_logger().info(f"Pump {pump_id} configured successfully.")  # end config process
                    
            
        err, msg = pump['device']._dispense_volume(volume)

        if err:
            self.get_logger().info(f"Error dispensing at {self._solution_type} pump, address {self.pump['device']._i2c_address}.")
        
        self.get_logger().info(f"Successfully dispensed {volume} mL at address {hex(self.pump['device']._i2c_address)}.")
        
        return err, msg
            
    
    def _configure_device(self) -> bool:
        """Configures the pump.

        Returns:
            bool: Error flag, True if configuration failed, False otherwise.
        """
        
       # Create pump objects
        pump1 = AtlasEzoPeristalticPump(0x5a)
        pump2 = AtlasEzoPeristalticPump(0x5b)

        # Check for errors
        if pump1.error or pump2.error:
            return True  # ERROR

        # Store both the pump object and metadata in one dict
        self._pumps = {
            "1": {"configured": True, "device": pump1},
            "2": {"configured": True, "device": pump2}
        }

        return False

def main(args=None):
    """Main entry point for the PeristalticPump node."""
    rclpy.init(args=args)

    node = PeristalticPump('ph_up')

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()