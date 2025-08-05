import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import DailySchedulerMessage

from hardware.config import DAILY_SCHEDULER_PERIOD

from datetime import datetime
from utils.log import write_log

class DailyScheduler(Node):
    """Daily Scheduler Node.
    This class represents the Day and Night scheduler and hourly irrigation window
    in a ROS2 system.
    This node is responsible for tracking time of day and determining the system state (ON/OFF)
    It provides publishes the system state at regular intervals.
    
    Attributes:
        BUFFER_SIZE (int): The size of the buffer for the status publisher
        START_DAY_HOUR (int): The hour of day that the node starts publishing that it is Daytime
        END_DAY_HOUR (int): The hour of day that the node starts publishing that it is Nighttime
    """
    
    BUFFER_SIZE = 1
    START_DAY_HOUR = 6
    END_DAY_HOUR = 20
    
    IRRIGATION_WINDOW_START = 1
    IRRIGATION_WINDOW_END = 16
    
    def __init__(self):
        super().__init__('daily_scheduler_node')
        self.get_logger().info('Creating node...')
        
        service_name = 'daily_scheduler_node'
        # irrigation_service_name = 'irrigation_scheduler'
        callback_group = ReentrantCallbackGroup()
        
        # Create day/night status publisher
        self.publisher = self.create_publisher(
            DailySchedulerMessage,
            service_name,
            self.BUFFER_SIZE
        )
        self.get_logger().info(f'Created publisher for {service_name} topic.')
        
        # Create periodic publish timer
        self._daytime_publish_timer = self.create_timer(
            DAILY_SCHEDULER_PERIOD,
            self._publish_callback,
            callback_group=callback_group
        )
        to_log = '🎋 TIME: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)
        
    def _publish_callback(self):
        now = datetime.now()
        hour = now.hour
        minute = now.minute
        
        is_daytime = self.START_DAY_HOUR <= hour < self.END_DAY_HOUR
        is_in_window = self.IRRIGATION_WINDOW_START <= minute <= self.IRRIGATION_WINDOW_END
        is_irrigation_time = is_daytime and is_in_window
        
        to_log = f"⏰ TIME: Now Hour: {hour}; Now minute: {minute}; Daytime? {is_daytime}"
        write_log(to_log)
        self.get_logger().info(to_log)
        
        # Publish day/night message
        msg = DailySchedulerMessage()
        msg.is_daytime = is_daytime
        msg.is_irrigation_time = is_irrigation_time
        msg.state = "day" if is_daytime else "night"
        self.publisher.publish(msg)
        

def main(args=None):
    rclpy.init(args=args)
    node = DailyScheduler()
    
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()