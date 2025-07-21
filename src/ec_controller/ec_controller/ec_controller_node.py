import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import ControllerMessage
from interfaces.srv import ECControllerService


from interfaces.msg import SensorMessageFloat32

from ec_controller.controller_ec import Controller
from utils.log import write_log


class ECControllerNode(Node):
    """ECControllerNode Node.

    This class represents the EC (Electrical Conductivity) Controller node in a ROS2 system.
    The node is responsible for reading data from the EC Sensor Node and sending commands to the Peristaltic Pump node.

    """
    
    DEFAULT_EC = 100
    DEFAULT_KP = 0.1
    BUFFER_SIZE = 1
    EC_CONTROLLER_PERIOD = 0.5*60  # seconds   DEVELOPMENT
    # EC_CONTROLLER_PERIOD = 60*60   # 1 hour    TESTING
    
    
    def __init__(self):
        super().__init__('ec_controller_node')
        self.get_logger().info('Creating EC controller node...')
        
        service_name = 'ec_controller_node'
        callback_group = ReentrantCallbackGroup()
        
        self._target_ec = 1000
        self._ec = self.DEFAULT_EC
        self._kp = self.DEFAULT_KP
        self._controller_is_configured = False

        # Create the service
        self._service = self.create_service(
            ECControllerService,
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
            self.EC_CONTROLLER_PERIOD,
            self._publish_callback,
            callback_group=callback_group
        )
        # Create subscriber to ec_sensor topic
        self._ec_sensor_subscriber = self.create_subscription(
            SensorMessageFloat32,
            'cultivation_tank_ec_sensor',
            self._ec_sensor_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to cultivation_tank_ec_sensor topic')
        
        to_log = '🎋 CTRL_EC: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)
    
    def _ec_sensor_callback(self, msg: SensorMessageFloat32):
        """Callback function for the EC subscriber.
        
        Args:
            msg (SensorMessageFloat32): The received EC message.
        """
        if msg.err:
            self.get_logger().warning(f'Received error from EC sensor: {msg.msg}')
        else:
            self.get_logger().info(f'Received reading from EC sensor: {msg.data}')
            self._ec = msg.data
            
    def _publish_command(self, warning: bool, message: str, volume: float) -> None:
        command_msg = ControllerMessage()
        command_msg.pump_type = 'ec_up'
        command_msg.warning = warning
        command_msg.msg = message
        command_msg.volume = float(round(volume, 3))

        # Publish the command
        self._publisher.publish(command_msg)
        
        # Write to logs
        to_log = f'🧮 CTRL_EC: Published command: pump_type: ec_up | warning: {warning} | message: {message}| volume: {round(volume, 3)}'
        write_log(to_log)
        self.get_logger().info(to_log)
    
    def _configure_controller(self) -> None:
        """Instantiates the controller."""
        self._controller = Controller(unit_name="EC")
        self._controller_is_configured = True
    
    def _compute_volume(self, ec: float) -> tuple[bool,str,float]:
        warning, msg, out_vol = self._controller._compute(ec)
        self._publish_command(warning, msg, out_vol)
        return warning, msg, out_vol
    
    def _publish_callback(self):
        if not self._controller_is_configured:
            self._configure_controller()
            
        to_log = f'📝 CTRL_EC: Publishing to peristaltic pumps: ec={round(self._ec, 3)}'
        self.get_logger().info(to_log)
        write_log(to_log)
        self._compute_volume(self._ec)
    
    def _service_callback(
        self,
        request: ECControllerService.Request,
        response: ECControllerService.Response,
        ) -> ECControllerService.Response:
        """Handles incoming service requests to compute volume to dispense
        
        Args:
            request (ECControllerService.Request): The service request message.
            response (ECControllerService.Response): The service response message.
            
        Returns:
            ECControllerService.Response: The updated response with error flag, message, and volume data.
        """
        current_ec = request.ec
        if not self._controller_is_configured:
            self._configure_controller()
        
        self.get_logger().info("🥶 Service callback EC Controller Node activating")
        warning, msg, volume = self._compute_volume(current_ec)
        response.pump_type = request.pump_type
        response.err = warning
        response.msg = msg
        response.volume = volume
        return response
    

def main(args=None):
    """Main entry point for the ECControllerNode node."""
    rclpy.init(args=args)

    node = ECControllerNode()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()