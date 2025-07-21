import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import PhControllerMessage
from interfaces.srv import PhControllerService


from interfaces.msg import SensorMessageFloat32

from ph_controller.controller_ph import Controller
from utils.log import write_log

# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS


class PhControllerNode(Node):
    """PhControllerNode Node.

    This class represents the Ph Controller node in a ROS2 system.
    The node is responsible for reading data from the pH Sensor Node and sending commands to the Peristaltic Pump node.

    """
    
    DEFAULT_PH = 6.0
    DEFAULT_KP = 0.01
    BUFFER_SIZE = 1
    PH_CONTROLLER_PERIOD = 3*60  # seconds
    
    def __init__(self):
        super().__init__('ph_controller_node')
        self.get_logger().info('Creating pH controller node...')
        
        service_name = 'ph_controller_node'
        callback_group = ReentrantCallbackGroup()
        
        self._target_ph = 6.0
        self._ph = self.DEFAULT_PH  # Initialize with default pH
        self._kp = self.DEFAULT_KP
        self._controller_is_configured = False
        
        # Create the service
        self._service = self.create_service(
            PhControllerService,  # ** Add this service
            service_name,
            self._service_callback,
            callback_group=callback_group
        )
        self.get_logger().info(f'Created server for {service_name} service.')

        # Create pump command publisher
        self._publisher = self.create_publisher(
            PhControllerMessage,
            service_name,
            self.BUFFER_SIZE
        )
        self.get_logger().info(f'Created publisher for {service_name} topic.')

        # Create periodic publish timer
        self._publish_timer = self.create_timer(
            self.PH_CONTROLLER_PERIOD,
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
        
        to_log = '🎋 CTRL: Node created successfully.'
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
            
    def _publish_command(self, warning: bool, message: str, volume: float) -> None:
        
        which_pump = "1" if volume >= 0 else "2"  # ph_up pump (1) if positive volume, else ph_down pump (2)
        abs_vol = abs(float(volume))
        
        command_msg = PhControllerMessage()
        command_msg.pump_id = which_pump
        command_msg.warning = warning
        command_msg.msg = message
        command_msg.volume = abs_vol
        
        # Publish the command
        self._publisher.publish(command_msg)
        
        # Write to logs
        to_log = f'🧮 CTRL: Published command: pump_id: {which_pump} | warning: {warning} | message: {message}| volume: {abs_vol}'
        write_log(to_log)
        self.get_logger().info(to_log)
        
    def _configure_controller(self) -> None:
        """Instantiates the controller."""
        self._controller = Controller(unit_name="pH", kp=float(self._kp))
        self._controller_is_configured = True
        
    def _compute_volume(self, ph: float) -> tuple[bool,str,float]:
        warning, msg, out_vol = self._controller._compute(ph)
        self._publish_command(warning, msg, out_vol)
        return warning, msg, out_vol
    
    def _publish_callback(self):
        if not self._controller_is_configured:
            self._configure_controller()
            
        to_log = f'📝 CTRL: Publishing to peristaltic pumps: pH={self._ph}'
        self.get_logger().info(to_log)
        write_log(to_log)
        self._compute_volume(self._ph)
        
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
        response.pump_id = request.pump_id
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