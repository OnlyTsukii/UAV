import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Node(
        #     package='uav_patrol',
        #     executable='drone_controller_local',
        #     name='drone_controller_local',
        # ),
        # Node(
        #     package='uav_patrol',
        #     executable='drone_controller_mission',
        #     name='drone_controller_mission',
        # ),
        Node(
            package='uav_patrol',
            executable='drone_controller_raw',
            name='drone_controller_raw',
        ),
        # Node(
        #     package='uav_patrol',
        #     executable='usb_cam_test',
        #     name='usb_cam_test',
        # ),
        # Node(
        #     package='uav_patrol',
        #     executable='opencv_test',
        #     name='opencv_test',
        # ),
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
