import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import PhControllerPumpCommand
from interfaces.srv import PeristalticPumpService
# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS
from peristaltic_pump.ezo_peristaltic_pump import AtlasEzoPeristalticPump


class PeristalticPump(Node):
    """PeristalticPump Node.

    This class represents a Peristaltic Pump node in a ROS2 system.
    The node is responsible for controlling the peristaltic pump by volume to dispense

    """
    INIT_TIMER_PERIOD = 60  # Time in seconds for the initialization timer
    
    def __init__(self, solution_type: str):
        super().__init__(f'{solution_type}_peristaltic_pump')
        self.get_logger().info('Creating node...')
        
        service_name = f'{solution_type}_peristaltic_pump'
        callback_group = ReentrantCallbackGroup()
        
        self._solution_type = solution_type
        self._device_is_configured = False
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
            PhControllerPumpCommand,
            f'{solution_type}_peristaltic_pump',
            self._ph_controller_callback,
            
        )
        # Create initialization timer
        self._init_timer = self.create_timer(
            30,
            self._init_callback,
            callback_group=callback_group
        )
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
        
    def _ph_controller_callback(self, msg: PhControllerPumpCommand):
        """Callback for the pH controller to send commands to the pump.
        
        Args:
            msg (PhControllerPumpCommand): The recieved command from the pH controller.
        """
        if msg.err:
            self.get_logger().warning(f'Received error from ph controller: {msg.msg}')
        else: 
            self._dispense_volume(msg.volume)
    
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
        
        self._dispense_volume(0.00)
        if self._device_is_configured:
            self._init_timer.cancel()
        
    def _handle_pump_error(self):
        return None
        ## do this later
    
    def _dispense_volume(self, volume: float) -> tuple[bool,str]:
        """Dispense specified volume.

        Args:
            volume: in mL
        Returns: 
            bool: error flag - True if an error occured, False otherwise.
            str: dispense status ?D,-40.50,0
        """
        if not self._device_is_configured:
            err = self._configure_device()
            if err:
                self.get_logger().info("Error configuring pump")
            else:
                self._device_is_configured = True
                self.get_logger().info("Pump configured successfully.")
        
        err, msg = self._device._dispense_volume(volume)
        if err:
            self.get_logger().info(f"Error dispensing at {self._solution_type} pump, address {self._device._i2c_address}.")
        
        self.get_logger().info(f"Successfully dispensed {volume} mL at address {self._device._i2c_address}.")
        
        return err, msg
            
    
    def _configure_device(self) -> bool:
        """Configures the pump.
        
        Returns:
            bool: Error flag, True if configuration failed, False otherwise.
        """
        self._device = AtlasEzoPeristalticPump(0x5a)
        
        if self._device.error:
            return True
        
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