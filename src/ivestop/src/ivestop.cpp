/****************************************************************
 * Copyright (C) 2020-2025, idriverplus(BeiJing, WangHao Inc.)
 * 
 * NodeName: ivestop
 * FileName: ivestop.cpp
 * 
 * Description: 
 * stop
 *
 * History: 
 * Wang Hao  20/01/20    1.0.0    build this module.
 ****************************************************************/
#include "estop.h"
#include "std_msgs/Int8.h"

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "ivestop");
  ros::NodeHandle nh;
  estop node(nh);
  node.run();
  return 0;
}

