/****************************************************************
 * Copyright (C) 2015-2020, idriverplus(BeiJing ZhiXingZhe, Inc.)
 * 
 * NodeName: ivestop
 * FileName: estop.h, estop.cpp
 * 
 * Description: 
 * 1. Defining the Canet structure;
 * 2. Defining the class of estop
 *
 * History: 
 * Gaoqiang Wu    16/11/20    1.0.0    build this module.
 ****************************************************************/
#ifndef estop_H
#define estop_H

//ros lib
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Int8.h"

//lib
#include "boost_udp.h"
//c++ lib
#include <sstream>
#include <cstdlib>
#include <string>


using namespace std;

typedef unsigned char uint8;
typedef float float32;
typedef double float64;
typedef char int8;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef short int16;
typedef unsigned int uint32;
typedef int int32;

typedef struct sCanetSettings{
    string pcIp;
    int pcPort;
    string canetIp;
    int canetPort;
    int bdebug;
    int runningmode;
}sCanetSettings;



class estop
{
    public:
        estop(ros::NodeHandle nh);
        ~estop();
        void run(void);         // the entry

        static const uint8 sensornum = 10; //front:1-5 behind:6-10
        static const uint16_t bufferlength =100; //single sensor buffer length
        uint8 udpBuffer[1024]; //buffer
        uint16 udpBufferGroup[sensornum][bufferlength]; //can_msg
    private:
        void recVehicleData(uint16);    //receive buffer data from udp/canet
    private:
        uint16 speedtemp = 0;
        int16 steertemp = 0;
        float32 vehicleSpeed = 0.0;
        float32 steerAngle = 0.0;
        sCanetSettings canetSettings;

        ros::Publisher pub_;
};


#endif
