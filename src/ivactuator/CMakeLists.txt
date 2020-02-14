cmake_minimum_required(VERSION 2.8.3)
project(ivactuator)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg serial)

## Declare ROS messages and services
add_message_files(FILES ivactuator.msg)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package(   
   CATKIN_DEPENDS roscpp rospy std_msgs
   message_runtime
   )

## Build actuator
include_directories(include ${catkin_INCLUDE_DIRS})


add_executable(
    ivactuator
    #include/ivactuator/baic_car_longitudinal_ok.h
    #include/ivactuator/rtwtypes.h
    src/baic_car_longitudinal_ok.cpp
    src/actuator.cpp
    src/ivactuator.cpp
  )
target_link_libraries(ivactuator ${catkin_LIBRARIES})
add_dependencies(ivactuator ivactuator_generate_messages_cpp)