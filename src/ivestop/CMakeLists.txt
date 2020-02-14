cmake_minimum_required(VERSION 2.8.3)
project(ivestop)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

## Declare ROS messages and services
#add_message_files(FILES 
#ivcontrol.msg
#)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package(   
   CATKIN_DEPENDS roscpp rospy std_msgs
   message_runtime)

## Build actuator
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(ivestop src/ivestop.cpp src/estop.cpp)
target_link_libraries(ivestop ${catkin_LIBRARIES})
add_dependencies(ivestop ivestop_generate_messages_cpp)

