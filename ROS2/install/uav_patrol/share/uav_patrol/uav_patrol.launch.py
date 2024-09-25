import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Node(
        #     package='uav_patrol',
        #     executable='drone_controller',
        #     name='drone_controller',
        # ),
        Node(
            package='uav_patrol',
            executable='drone_controller_2',
            name='drone_controller_2',
        ),
        # Node(
        #     package='uav_patrol',
        #     executable='gps_simulator',
        #     name='gps_simulator',
        # ),
        # Node(
        #     package='uav_patrol',
        #     executable='tf_converter',
        #     name='tf_converter'
        # ),
        # Node(
        #     package='uav_patrol',
        #     executable='uav2cam_broadcaster',
        #     name='uav2cam_broadcaster'
        # ),
        # Node(
        #     package='uav_patrol',
        #     executable='yolo_detector',
        #     name='yolo_detector',
        # ),
    ])
