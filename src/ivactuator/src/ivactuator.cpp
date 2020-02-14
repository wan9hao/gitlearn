
/****************************************************************
 * Copyright (C) 2015-2020, idriverplus(BeiJing ZhiXingZhe, Inc.)
 * 
 * NodeName: ivactuator
 * FileName: ivactuator.cpp
 * 
 * Description: 
 * 1. Receiving the UDP raw data;
 * 2. Get vehicle speed and steering angle information
 * 3. Publishing the parsed data.
 *
 * History: 
 * Gaoqiang Wu  16/11/20    1.0.0    build this module.
 ****************************************************************/
#include "actuator.h"



int main(int argc, char *argv[])
{
  ros::init(argc, argv, "ivactuator");
  ros::NodeHandle nh;
  actuator node(nh);
  node.run();
  return 0;
}

