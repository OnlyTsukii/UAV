from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='uav_patrol',
            executable='cmd_subscriber',
            name='cmd_subscriber'
        ),
        Node(
            package='uav_patrol',
            executable='dft_publisher',
            name='dft_publisher'
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
            executable='gps_simulator',
            name='gps_simulator'
        ),
    ])