import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    config_file = os.path.join(get_package_share_directory("uav_patrol"), "config", "gps_handler.yaml")
    driver_node = Node(
        package='uav_patrol',
        executable='nmea_serial_driver',
        name='nmea_serial_driver',
        parameters=[config_file]
    )
    
    return LaunchDescription([
        Node(
            package='uav_patrol',
            executable='cmd_subscriber',
            name='cmd_subscriber'
        ),
        Node(
            package='uav_patrol',
            executable='tf_converter',
            name='tf_converter'
        ),
        Node(
            package='uav_patrol',
            executable='uav2cam_broadcaster',
            name='uav2cam_broadcaster'
        ),
        Node(
            package='uav_patrol',
            executable='dft_publisher',
            name='dft_publisher',
        ),
        # driver_node,
        # Node(
        #     package='uav_patrol',
        #     executable='gps_simulator',
        #     name='gps_simulator'
        # ),
        Node(
            package='uav_patrol',
            executable='gps_handler',
            name='gps_handler'
        ),
    ])
