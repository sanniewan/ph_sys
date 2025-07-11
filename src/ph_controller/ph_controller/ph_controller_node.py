import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import PhControllerPumpCommand
from interfaces.srv import PeristalticPumpService


from interfaces.msg import SensorMessageFloat32
from interfaces.srv import SensorServiceFloat32

from ph_controller.controller_ph import Controller

# from hardware.config import WATER_PH_SENSORS, WATER_SENSOR_PERIOD, TANKS


class PhControllerNode(Node):
    """PhControllerNode Node.

    This class represents the Ph Controller node in a ROS2 system.
    The node is responsible for reading data from the pH Sensor Node and sending commands to the Peristaltic Pump node.

    """
    
    DEFAULT_PH = 6.0
    DEFAULT_KP = 0.01
    BUFFER_SIZE = 10
    
    def __init__(self):
        super().__init__('ph_controller_node')
        self.get_logger().info('Creating pH controller node...')
        
        service_name = 'ph_controller_node'
        callback_group = ReentrantCallbackGroup()
        
        self._target_ph = 6.0
        self._ph = self.DEFAULT_PH  # Initialize with default pH
        self._kp = self.DEFAULT_KP
        self._init = True
        
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
            PhControllerPumpCommand,
            service_name,
            self.BUFFER_SIZE
        )
        self.get_logger().info(f'Created publisher for {service_name} topic.')

        # Create subscriber to ph_sensor topic
        self._ph_sensor_subscriber = self.create_subscription(
            SensorMessageFloat32,
            'cultivation_tank_ph_sensor',
            self._ph_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to cultivation_tank_ph_sensor topic')
        
        self.get_logger().info('Node created successfully.')
        
    def _ph_callback(self, msg: SensorMessageFloat32):
        """Callback function for the pH subscriber.
        
        Args:
            msg (SensorMessageFloat32): The received pH message.
        """
        if msg.err:
            self.get_logger().warning(f'Received error from pH sensor: {msg.msg}')
        else:
            self._ph = msg.data
            self._configure_controller()
            self._compute_volume(msg.data)
        
    def _publish_command(self, error: bool, message: str, data: float) -> None:
        command_msg = PhControllerPumpCommand()
        command_msg.pump_id = 0x5a  # ** change this later to be dynamic
        command_msg.err = error
        command_msg.msg = message
        command_msg.data = data
        self._publisher.publish(command_msg)
        
    
        return None
    def _configure_controller(self) -> None:
        self._controller = Controller(unit_name="pH", kp=float(self._kp))
        
    def _compute_volume(self, ph: float):
        warning, msg, out_vol = self._controller._compute(ph)
        if warning:
            self.get_logger().warning(f'Received warning from controller: {msg}')
            self._publish_command(True, msg, out_vol)
            
        else:
            self.get_logger().info(f'No error from controller.')
            self._publish_command(False, "successfully published ph_controller_node command", out_vol)
            
        
    def _service_callback(
        # idrk
    ):
        return None


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