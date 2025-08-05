import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup, MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from interfaces.msg import ControllerMessage, SensorMessageFloat32, DailySchedulerMessage
from interfaces.srv import IrrigationPumpsService

from irrigation_pumps.relay_board import MCP23017_RelayBoard
from utils.log import write_log

class IrrigationPumpNode(Node):
    """IrrigationPump Node.
    
    This class represents the irrigation pump in the ROS2 system.
    This node is responsible for recieving commands from the scheduler and turning
    the irrigation pumps on and off inside the tank.
    
    Attributes:
        BUFFER_SIZE: The size of the buffer of incoming messages for the subscriber
        IRRIGATION_PUMP_PORT: The port number on the relay controlling the irrigation pump
    """
    
    BUFFER_SIZE = 1
    IRRIGATION_PUMP_PORT = 2
    CYCLICAL_PUMP_PORT = 1
    
    def __init__(self):
        super().__init__('irrigation_pump_node')
        self.get_logger().info('Creating irrigation pump node...')
        
        service_name = 'irrigation_pump_node'
        callback_group = ReentrantCallbackGroup()
        
        self._is_irrigation_time = False
        self._is_daytime = False
        self._board_configured = False
        self._board = None
        
        # Create the service
        self._service = self.create_service(
            IrrigationPumpsService,
            service_name,
            self._service_callback,
            callback_group=callback_group
        )
        self.get_logger().info(f'Created server for {service_name} service.')
        
         # Create subscriber to irrigation scheduler topic
        self._irrigation_scheduler_subscriber = self.create_subscription(
            DailySchedulerMessage,
            'daily_scheduler_node',
            self._irrigation_scheduler_callback,
            self.BUFFER_SIZE,
            callback_group=callback_group
        )
        self.get_logger().info(f'Subscribed to irrigation_scheduler topic')
        
        to_log = '🎋 TNK_PMP: Node created successfully.'
        write_log(to_log)
        self.get_logger().info(to_log)
        
        
    def _service_callback(
        self,
        request: IrrigationPumpsService.Request,
        response: IrrigationPumpsService.Response,
        ) -> IrrigationPumpsService.Response:
        """Handles incoming service requests to open or close specified port
        
        Args:
            request (IrrigationPumpsService.Request): The service request message.
            response (IrrigationPumpsService.Response): The service response message.
            
        Returns:
            IrrigationPumpsService.Response: The updated response with error flag, message, and volume data.
        """
        port = request.port
        state = request.state  # True = close False = open
        if not self._board_configured:
            self._configure_board()
        
        self.get_logger().info("🥶 Service callback irrigation pumps activating")
        if state:
            err, msg, closed = self._board.close(port)
        else:
            err, msg, closed = self._board.open(port)
        
        response.err = err
        response.msg = msg
        response.state = closed
        return response
    
    def _irrigation_scheduler_callback(self, msg: DailySchedulerMessage):
        """Callback function for the daily scheduler subscriber.

        Args:
            msg (SensorMessageFloat32): The received temperature message.
        """
        self._is_irrigation_time = msg.is_irrigation_time
        self._is_daytime = msg.is_daytime
        self._control_board()
        
        to_log = f'🚿 TNK_PMP: Received message from daily scheduler. irrigation time? {msg.is_irrigation_time}'
        write_log(to_log)
        self.get_logger().info(f'Received message from daily scheduler. irrigation time? {msg.is_irrigation_time}')

    def _control_board(self) -> tuple[bool, str]:
        # Ensure board is configured
        if not self._board_configured:
            err = self._configure_board()
            if err:
                to_log = "🚿 TNK_PMP: Error configuring the board."
            # else:
                # to_log = "🚿 TNK_PMP: Successfully configured the board."
                write_log(to_log)
        
        # Turn on relay port for the irrigation pump if is_irrigation_time
        if self._is_irrigation_time:
            self._board.open(self.IRRIGATION_PUMP_PORT)
            to_log = "🚿 TNK_PMP: Irrigation time. Irrigation port opened."
        else:
            self._board.close(self.IRRIGATION_PUMP_PORT)
            to_log = "🚿 TNK_PMP: Not irrigation time. Irrigation port closed."
        write_log(to_log)
        
        # Turn on relay port for the cyclical pump if is_daytime
        if self._is_daytime:
            self._board.open(self.CYCLICAL_PUMP_PORT)
            to_log = "🚿 TNK_PMP: Daytime. Cyclical port opened."
        else:
            self._board.close(self.CYCLICAL_PUMP_PORT)
            to_log = "🚿 TNK_PMP: Nighttime. Cyclical port closed."
        write_log(to_log)

    def _configure_board(self) -> bool:
        """Configures the MCP23017 relay board.
        
        Returns:
            bool: Error flag; True if configuration failed, False otherwise.
        """
        address = 0x26
        try:
            board = MCP23017_RelayBoard(address)
        except Exception as e:
            to_log = f"🚿 TNK_PMP: Failed to initialize MCP23017 board at address {hex(address)}: {str(e)}"
            write_log(to_log)
            self.get_logger().error(to_log)
            return True
            
        # Set all ports as output initially
        err, msg = board._set_ports_as_output()
        if err:
            self._board_configured = False
            to_log = f"🚿 TNK_PMP: Failed to configure board: {msg}"
            write_log(to_log)
            self.get_logger().error(to_log)
            return True
        else:
            self._board = board
            self._board_configured = True
            to_log = "🚿 TNK_PMP: Board configured successfully"
            write_log(to_log)
            self.get_logger().info(to_log)
            
        # Close all ports initially
        err, msg = self.close_all_ports()
        if err:
            to_log = "🚿 TNK_PMP: Error closing all ports."
            write_log(to_log)
            return True
        
        return False  # Successfully configured
        
    def close_all_ports(self) -> tuple[bool,str]:
        """Closes all ports on the MCP23017 relay board.
        
        Returns:
            bool: Error flag; True if closing all failed, False otherwise.
            msg: Message for the error
        """
        for i in range(self._board.port_count):
            err, msg, closed = self._board.close(i)
            if err:
                to_log = "🚿 TNK_PMP: ERROR: Error closing all ports."
                write_log(to_log)
                return True, msg
        return False, "Successfully closed all ports"
    
    def destroy_node(self):
        self.get_logger().info("Shutting down...")
        self.close_all_ports()
        super().destroy_node()
        
# def main(args=None):
#     rclpy.init(args=args)

#     node = IrrigationPumpNode()

#     executor = MultiThreadedExecutor(num_threads=4)
#     executor.add_node(node)
#     executor.spin()

#     node.destroy_node()
#     rclpy.shutdown()
 
def main(args=None):
    """Main entry point for the IrrigationPumpNode node."""
    rclpy.init(args=args)
    node = IrrigationPumpNode()

    def on_shutdown():
        node.close_all_ports()
        node.destroy_node()

    rclpy.get_default_context().on_shutdown(on_shutdown)
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        pass
        
if __name__ == '__main__':
    main()