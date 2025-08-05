import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import GroupAction
from launch_ros.actions import PushRosNamespace
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ph_sensor',
            executable='ph_sensor_node',
            name='ph_sensor',
            output='screen'
        ),
        Node(
            package='ph_controller',
            executable='ph_controller_node',
            name='ph_controller',
            output='screen'
        ),
        Node(
            package='ec_sensor',
            executable='ec_sensor_node',
            name='ec_sensor',
            output='screen'
        ),
        Node(
            package='ec_controller',
            executable='ec_controller_node',
            name='ec_controller',
            output='screen'
        ),
        Node(
            package='ec_sensor',
            executable='ec_sensor_node',
            name='ec_sensor',
            output='screen'
        ),
        Node(
            package='ec_controller',
            executable='ec_controller_node',
            name='ec_controller',
            output='screen'
        ),
        Node(
            package='peristaltic_pump',
            executable='peristaltic_pump_node',
            name='peristaltic_pump',
            output='screen'
        ),
        Node(
            package='daily_scheduler',
            executable='daily_scheduler_node',
            name='daily_scheduler',
            output='screen'
        ),
        Node(
            package='irrigation_pumps',
            executable='irrigation_pumps_node',
            name='irrigation_pumps',
            output='screen'
        ),
        
    ])