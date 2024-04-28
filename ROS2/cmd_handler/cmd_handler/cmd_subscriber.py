import json
import rclpy
import socket

from rclpy.node import Node
from std_msgs.msg import Int16


SERVER_IP = '127.0.0.1'
SERVER_PORT = 8889

STATUS_OK   = 0
STATUS_FAIL = -1

class Cmd_Subscriber(Node):

    def __init__(self):
        super().__init__("cmd_subscriber")
        self.subscriber = self.create_subscription(Int16, "ctrl_cmd", self.cmd_callback, 10)
        self.threshold = [1.0, 1.0, 1.0]
        self.pre_msg = None
        self.socket = None

    def cmd_callback(self, msg: Int16):
        print(f"Receive message: {msg.data}")
        self.send_data(str(msg.data))

    def send_data(self, data):
        with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as s:
            s.sendto(data.encode(), (SERVER_IP, SERVER_PORT))
            print("send data")
            
            # data, addr = s.recvfrom(64)
            # resp = int.from_bytes(data, byteorder='big')
            
            # print(f"Received response from {addr}: {resp}")


def main(args=None):

    rclpy.init(args=args)

    cmd_subscriber = Cmd_Subscriber()

    rclpy.spin(cmd_subscriber)

    cmd_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
