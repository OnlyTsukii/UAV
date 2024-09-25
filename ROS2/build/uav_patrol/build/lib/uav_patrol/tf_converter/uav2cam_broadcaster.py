import rclpy
import math
import numpy as np

from geometry_msgs.msg import TransformStamped
from rclpy.node import Node
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster


def quaternion_from_euler(ai, aj, ak):
    ai /= 2.0
    aj /= 2.0
    ak /= 2.0
    ci = math.cos(ai)
    si = math.sin(ai)
    cj = math.cos(aj)
    sj = math.sin(aj)
    ck = math.cos(ak)
    sk = math.sin(ak)
    cc = ci*ck
    cs = ci*sk
    sc = si*ck
    ss = si*sk

    q = np.empty((4, ))
    q[0] = cj*sc - sj*cs
    q[1] = cj*ss + sj*cc
    q[2] = cj*cs - sj*sc
    q[3] = cj*cc + sj*ss

    return q


class StaticFramePublisher(Node):

    def __init__(self):
        super().__init__('uav_camera_broadcaster')

        self.tf_static_broadcaster = StaticTransformBroadcaster(self)
        self.publish_transforms()
    
    # Convert camera frame to uav frame
    def publish_transforms(self):
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'uav'
        t.child_frame_id = 'camera'

        t.transform.translation.x = 0.0
        t.transform.translation.y = -0.2
        t.transform.translation.z = 0.1
        
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0

        self.tf_static_broadcaster.sendTransform(t)


def main():
    rclpy.init()
    node = StaticFramePublisher()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()