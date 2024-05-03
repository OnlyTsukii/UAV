from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='tf_converter',
            executable='tf_converter',
            name='tf_converter'
        ),
        Node(
            package='tf_converter',
            executable='uav2cam_broadcaster',
            name='uav2cam_broadcaster'
        ),
    ])