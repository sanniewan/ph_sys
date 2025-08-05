import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import ControllerMessage, SensorMessageFloat32, DailySchedulerMessage
from interfaces.srv import PhControllerService
from hardware.config import CONTROLLER_PERIOD

from ph_controller.controller_ph import Controller
from utils.log import write_log


class PhControllerNode(Node):
    """PhControllerNode Node.

    This class represents the Ph Controller node in a ROS2 system.
    The node is responsible for reading data from the pH Sensor Node and sending commands to the Peristaltic Pump node.

    """
    
    TARGET_PH = 6.0
    TOLERANCE_PH = 0.2
    DEFAULT_PH = 5.5
    DEFAULT_KP = 0.2
    BUFFER_SIZE = 1

    def __init__(self):
        super().__init__('ph_controller_node')
        self.get_logger().info('Creating pH controller node...')
        
        service_name = 'ph_controller_node'
        callback_group = ReentrantCallbackGroup()
        
        self._target_ph = self.TARGET_PH
        self._ph = self.TARGET_PH  # Initialize with default pH
        self._kp = self.DEFAULT_KP
        self._controller_is_configured = False
        self._is_daytime = True
        
        # Create the service
        self._service = self.create_service(
            PhControllerService,
            service_name,
            self._service_callback,
            callback_group=callback_group
        )
        self.get_logger().info(f'Created server for {service_name} service.')

        # Create pump command publisher
        self._publisher = self.create_publisher(
            ControllerMessage,
            service_name,
            self.BUFFER_SIZE
        )
        self.get_logger().info(f'Created publisher for {service_name} topic.')

        # Create periodic publish timer
        self._publish_timer = self.create_timer(
            CONTROLLER_PERIOD,
            self._publish_callback,
            callback_group=callback_group
        )
        
        # Create subscriber to ph_sensor topic
        self._ph_sensor_subscriber = self.create_subscription(
            SensorMessageFloat32,
            'cultivation_tank_ph_sensor',
            self._ph_sensor_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to cultivation_tank_ph_sensor topic')
        
        # Create subscriber to daily scheduler topic
        self._daily_scheduler_subscriber = self.create_subscription(
            DailySchedulerMessage,
            'daily_scheduler_node',
            self._daily_scheduler_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to daily_scheduler_node topic')

        to_log = '🎋 CTRL_PH: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)
        
    def _ph_sensor_callback(self, msg: SensorMessageFloat32):
        """Callback function for the pH subscriber.
        
        Args:
            msg (SensorMessageFloat32): The received pH message.
        """
        if msg.err:
            self.get_logger().warning(f'Received error from pH sensor: {msg.msg}')
        else:
            self.get_logger().info(f'Received reading from pH sensor: {msg.data}')
            self._ph = msg.data
    
    def _daily_scheduler_callback(self, msg: DailySchedulerMessage):
        """Callback function for the daily scheduler subscriber.

        Args:
            msg (SensorMessageFloat32): The received temperature message.
        """
        self.get_logger().info(f'Received message from daily scheduler. It is now {msg.state}')
        self._is_daytime = msg.is_daytime
    
    def _publish_command(self, warning: bool, message: str, volume: float) -> None:
        
        which_pump = "ph_up" if volume >= 0 else "ph_down"  # ph_up pump (1) if positive volume, else ph_down pump (2)
        abs_vol = round(abs(float(volume)), 3)
        
        command_msg = ControllerMessage()
        command_msg.pump_type = which_pump
        command_msg.warning = warning
        command_msg.msg = message
        command_msg.volume = abs_vol
        
        # Publish the command
        self._publisher.publish(command_msg)
        
        # Write to logs
        to_log = f'         🧮 CTRL_PH: Published command: pump_type: {which_pump} | {"Warning" if warning else "Normal"} | message: {message}| volume: {abs_vol}'
        write_log(to_log)
        self.get_logger().info(to_log)
        
    def _configure_controller(self) -> None:
        """Instantiates the controller."""
        target_low = float(self.TARGET_PH-self.TOLERANCE_PH)
        target_high = float(self.TARGET_PH+self.TOLERANCE_PH)
        self._controller = Controller(unit_name="pH", kp=float(self._kp), 
                                      target_low=target_low, target_high=target_high, 
                                      crit_low=1.0, crit_high=14)
        self._controller_is_configured = True
        
    def _compute_volume(self, ph: float) -> tuple[bool,str,float]:
        warning, msg, out_vol = self._controller._compute(ph)
        self._publish_command(warning, msg, out_vol)
        return warning, msg, out_vol
    
    def _publish_callback(self):
        if self._is_daytime:
            if not self._controller_is_configured:
                self._configure_controller()
                
            # to_log = f'📝 CTRL_PH: Publishing to peristaltic pumps: pH={round(self._ph, 3)}'
            # self.get_logger().info(to_log)
            # write_log(to_log)
            self._compute_volume(self._ph)
        else:
            to_log = '          🧮 CTRL_PH: It is NOT daytime - Nothing to publish'
            write_log(to_log)
        
    def _service_callback(
        self,
        request: PhControllerService.Request,
        response: PhControllerService.Response,
        ) -> PhControllerService.Response:
        """Handles incoming service requests to compute volume to dispense
        
        Args:
            request (PhControllerService.Request): The service request message.
            response (PhControllerService.Response): The service response message.
            
        Returns:
            PhControllerService.Response: The updated response with error flag, message, and volume data.
        """
        current_ph = request.ph
        if not self._controller_is_configured:
            self._configure_controller()
        
        self.get_logger().info("🥶 service callback ph Controller Node activating")
        warning, msg, volume = self._compute_volume(current_ph)
        response.pump_type = request.pump_type
        response.err = warning
        response.msg = msg
        response.volume = volume
        return response
    

def main(args=None):
    """Main entry point for the PhControllerNode node."""
    rclpy.init(args=args)

    node = PhControllerNode()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()