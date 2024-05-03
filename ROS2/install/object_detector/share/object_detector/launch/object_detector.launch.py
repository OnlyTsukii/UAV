from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='object_detector',
            executable='dft_publisher',
            name='dft_publisher'
        ),
    ])