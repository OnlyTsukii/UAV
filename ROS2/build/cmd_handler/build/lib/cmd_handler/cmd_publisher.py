import rclpy
import threading
import time

import rclpy.executors
from rclpy.node import Node
from std_msgs.msg import Int16


class Cmd_Publisher(Node):
    
    def __init__(self) -> None:
        super().__init__("cmd_publisher")
        self.publisher = self.create_publisher(Int16, "ctrl_cmd", 10)
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Int16( data=1 )
        self.publisher.publish(msg)
        self.get_logger().info(f'Publishing message: {msg.data}')


def main(args=None):
    rclpy.init(args=args)

    cmd_publisher = Cmd_Publisher()
    
    rclpy.spin(cmd_publisher)

    cmd_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
        