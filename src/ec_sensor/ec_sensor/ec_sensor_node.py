import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import SensorMessageFloat32, DailySchedulerMessage
from interfaces.srv import SensorServiceFloat32
from hardware.config import WATER_EC_SENSORS, WATER_SENSOR_PERIOD, TANKS
from ec_sensor.ezo_ec_sensor import AtlasEzoEcSensor
from utils.log import write_log


class WaterEcSensor(Node):
    """WaterEcSensor Node.

    This class represents a water electrical conductivity (EC) sensor node in a ROS2 system.
    The node is responsible for reading EC data from the Atlas Scientific EC probe.
    It provides a service to read the sensor status and publishes the sensor data at regular intervals.

    Attributes:
        BUFFER_SIZE (int): The size of the buffer for the status publisher.
        INVALID_EC (float): Placeholder value for invalid EC readings.
        SENSOR_ADDRESSES (dict): Mapping of sensor names to I2C addresses.
        DEFAULT_TEMPERATURE (float): Default temperature value if actual temperature is unavailable.
    """

    BUFFER_SIZE = 10
    INVALID_EC = -99.9
    SENSOR_ADDRESSES = WATER_EC_SENSORS
    INIT_TIMER_PERIOD = 60  # Time in seconds for the initialization timer
    DEFAULT_TEMPERATURE = 25.0  # Degrees Celsius
    
    SIMULATED_DATA_MIN = 800
    SIMULATED_DATA_MAX = 1000

    def __init__(self, tank: str):
        """Initializes the WaterEcSensor node for the given water tank.

        Args:
            tank (str): The name of the tank where the EC sensor is located.
                Valid values are 'nursery', 'cultivation'.
        """
        super().__init__(f'{tank}_tank_ec_sensor')
        self.get_logger().info('Creating node...')

        service_name = f'{tank}_tank_ec_sensor'
        callback_group = ReentrantCallbackGroup()

        self._tank = tank
        self._sensor_is_configured = False
        self._temperature = self.DEFAULT_TEMPERATURE  # Initialize with default temperature
        self._init = True
        self._simulated_data = 100
        self._is_daytime = True
        
        # Create the service
        self._service = self.create_service(
            SensorServiceFloat32,
            service_name,
            self._service_callback,
            callback_group=callback_group
        )
        self.get_logger().info(f'Created server for {service_name} service.')

        # Create periodic publish timer
        self._publisher = self.create_publisher(
            SensorMessageFloat32,
            service_name,
            self.BUFFER_SIZE
        )
        self.get_logger().info(f'Created publisher for {service_name} topic.')

        # Create subscriber to temperature topic
        self._temperature_subscriber = self.create_subscription(
            SensorMessageFloat32,
            f'{tank}_tank_t_sensor',
            self._temperature_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to {tank}_tank_t_sensor topic')

        # Create subscriber to daily scheduler topic
        self._daily_scheduler_subscriber = self.create_subscription(
            DailySchedulerMessage,
            'daily_scheduler_node',
            self._daily_scheduler_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to daily_scheduler_node topic')

        # Create initialization timer
        self._init_timer = self.create_timer(
            self.INIT_TIMER_PERIOD,
            self._init_callback,
            callback_group=callback_group
        )

        # Create publish status timer
        self._publish_timer = self.create_timer(
            WATER_SENSOR_PERIOD,
            self._publish_callback,
            callback_group=callback_group
        )
        to_log = '🎋 EC_S: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)
        to_log = '🎋 EC_S: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)


    def _temperature_callback(self, msg: SensorMessageFloat32):
        """Callback function for the temperature subscriber.

        Args:
            msg (SensorMessageFloat32): The received temperature message.
        """
        if msg.err:
            self.get_logger().warning(f'Received error from water temperature sensor: {msg.msg}')
        else:
            self._temperature = msg.data
    
    def _daily_scheduler_callback(self, msg: DailySchedulerMessage):
        """Callback function for the temperature subscriber.

        Args:
            msg (SensorMessageFloat32): The received temperature message.
        """
        self.get_logger().info(f'Received message from daily scheduler. It is now {msg.state}')
        self._is_daytime = msg.is_daytime
    
    def _service_callback(
        self, 
        request: SensorServiceFloat32.Request,
        response: SensorServiceFloat32.Response,
        ) -> SensorServiceFloat32.Response:
        """Handles incoming service requests for sensor readings.

        Args:
            request (SensorServiceFloat32.Request): The service request message.
            response (SensorServiceFloat32.Response): The service response message.

        Returns:
            SensorServiceFloat32.Response: The updated response with error flag, message, and EC data.
        """
        error, message, data = self._read_sensor()
        response.err = error
        response.msg = message
        response.data = data
        return response

    def _init_callback(self) -> None:
        """Initialization callback to configure the sensor.

        If the sensor is successfully configured, this callback cancels itself.
        """
        if self._init:
            self._init = False
            self._init_timer.cancel()
            self.create_timer(
                self.INIT_TIMER_PERIOD,
                self._init_callback,
                callback_group=MutuallyExclusiveCallbackGroup()
            )

        # self._read_sensor()
        # self._read_sensor()
        if self._sensor_is_configured:
            self._init_timer.cancel()

    def _read_sensor(self) -> tuple[bool, str, float]:
        """Reads sensor data and publishes the status.

        Returns:
            tuple: A tuple containing:
                - bool: Error flag, True if an error occurred, False otherwise.
                - str: Error message, or an empty string if no error occurred.
                - float: Value from reading the sensor.
        """
        if not self._sensor_is_configured:
            err, msg = self._configure_sensor()
            if err:
                write_log(f"    ☄️  PH: Warning from EC sensor: {msg}")
                return self._handle_sensor_error(msg)

            else:
                self._sensor_is_configured = True
                self.get_logger().info('Sensor configured successfully.')

        # Use the latest temperature value for EC compensation
        temperature = self._temperature

        err, msg, data = self._sensor.read(temperature)
        if err:
            return self._handle_sensor_error(msg)

        self._publish_status(err, msg, data)
        return err, msg, data
    
    def _simulate_read_sensor(self) -> tuple[bool, str, float]:
        """Generates EC values for testing purposes and publishes the status.

        Returns:
            tuple: A tuple containing:
                - bool: Error flag, True if an error occurred, False otherwise.
                - str: Error message, or an empty string if no error occurred.
                - float: Value from reading the sensor.
        """
        err = False
        msg = "This is simulated data"
        data = float(self._simulated_data)  # fabricated ph data
        if self._simulated_data >= self.SIMULATED_DATA_MAX:
            self._simulated_data = self.SIMULATED_DATA_MIN
        else:
            self._simulated_data += 100
            
        self._publish_status(err, msg, data)
        return err, msg, data

    def _configure_sensor(self) -> tuple[bool, str]:
        """Configures the sensor.

        Returns:
            tuple: A tuple containing:
                - bool: Error flag, True if configuration failed, False otherwise.
                - str: Success or error message.
        """
        try :
            address = self.SENSOR_ADDRESSES[self._tank]

        except KeyError as e:
            msg = f'Invalid tank name: {self._tank} ({e})'
            return True, msg
        
        self._sensor = AtlasEzoEcSensor(address)
        if self._sensor.error:
            return True, self._sensor.message
        
        return False, self._sensor.message

    def _handle_sensor_error(self, message: str) -> tuple[bool, str, float]:
        """Handles sensor errors by logging and publishing invalid readings.

        Args:
            message (str): The error message from the sensor.

         Returns:
            tuple: A tuple containing:
                - bool: Error flag, set to True.
                - str: The error message.
                - float: An error EC value of -99.9.
        """
        self.get_logger().error(message)
        self._publish_status(True, message, self.INVALID_EC)
        return True, message, self.INVALID_EC

    def _publish_status(self, error: bool, message: str, data: float) -> None:
        """Publishes the sensor's status.

        Args:
            error (bool): Error flag.
            message (str): Error or status message.
            data (float): Electrical conductivity value.
        """
        to_log = f'🥗 EC_S: EC sensor reading: EC={data}'
        write_log(to_log)
        self.get_logger().info(to_log)
        
        to_log = f'🥗 EC_S: EC sensor reading: EC={data}'
        write_log(to_log)
        self.get_logger().info(to_log)
        
        status_msg = SensorMessageFloat32()
        status_msg.err = error
        status_msg.msg = message
        status_msg.data = data
        self._publisher.publish(status_msg)

    def _publish_callback(self):
        """Callback function to publish sensor data periodically."""
        if self._is_daytime:
            self._read_sensor()
            self.get_logger().info('Sensor read successfully.')
            
            # self._simulate_read_sensor()
            # self.get_logger().info('Sensor readings simulated.')
        else:
            to_log = '🥗 EC_S: It is NOT daytime - Nothing to publish'
            write_log(to_log)


def main(args=None):
    """Main entry point for the WaterEcSensor node."""
    rclpy.init(args=args)

    node = WaterEcSensor('cultivation')

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()