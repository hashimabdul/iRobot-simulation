# iRobot Create 2 Platform Simulation

# Description
iRobot create 2 simulation and control demo using ROS in gazebo simulated environment

# DEPENDENCIES
- ROS Kinetic
- $ ros-kinetic-desktop-full
- libcreate
- $ sudo apt-get install ros-kinetic-libcreate

# PLATFORM
Linux x86/x64 

# Build
- $ cd create_ws/
- $ catkin_make 

# Environment Setup 
- $ source devel/setup.bash 

# Execute
- for keyboard control 
- $ roslaunch controller keyboard_publisher.launch
- for random control
- $ roslaunch controller random_publisher.launch

# TO DO
- integrate the on-board sensors (cliff, bump, light) from by create autonomy labs
- correct the left/right differential drive model

# Demo
[![Random Control](https://img.youtube.com/vi/GjCdqCH3-SE/0.jpg)](https://www.youtube.com/watch?v=GjCdqCH3-SE "Random Control")
[![Keyboard Control](https://img.youtube.com/vi/8WTMdLiThBE/0.jpg)](https://www.youtube.com/watch?v=8WTMdLiThBE "Keyboard Control")
