<<<<<<< HEAD
#!/bin/bash

source /home/ccl/UAV/ROS2/install/setup.bash
ros2 run cmd_handler cmd_publisher

wait
exit 0
=======

#!/bin/bash

# export ROS_DOMAIN_ID=8
# source /opt/ros/galactic/setup.bash
source /home/xs/UAV/ROS2/install/setup.bash
ros2 run cmd_handler cmd_subscriber
# ros2 run cmd_handler cmd_publisher
>>>>>>> 2719dffe3818bec570c79fd9b1e41a553e6e6b92
