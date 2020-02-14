
/****************************************************************
 * Copyright (C) 2015-2020, idriverplus(BeiJing ZhiXingZhe, Inc.)
 * 
 * NodeName: ivactuator
 * FileName: actuator.h, actuator.cpp
 * 
 * Description: 
 * 1. Defining the Canet structure;
 * 2. Defining the class of actuator
 *
 * History: 
 * Gaoqiang Wu    16/11/20    1.0.0    build this module.
 ****************************************************************/
#ifndef actuator_H
#define actuator_H

//ros lib
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Int8.h"

//lib
#include "ivactuator/ivactuator.h"
#include "boost_udp.h"
//c++ lib
#include <sstream>
#include <cstdlib>
#include <string>


#include "ivactuator/baic_car_longitudinal_ok.h"  /* Model's header file */
#include "ivactuator/rtwtypes.h"


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



class actuator
{
    public:
        actuator(ros::NodeHandle nh);
        ~actuator();
        void run(void);         // the entry
        static void chatterCallback(const std_msgs::Int8::ConstPtr& msg);
        static const uint8 sensornum = 10; //front:1-5 behind:6-10
        static const uint16_t bufferlength =100; //single sensor buffer length

        void callback_stop(const std_msgs::Int8::ConstPtr msg);
        
        uint8 udpBuffer[1024]; //buffer
        uint16 udpBufferGroup[sensornum][bufferlength]; //can_msg
        std_msgs::Int8 flag_stop;

    private:
        void recVehicleData(uint16 num_buf);    //receive buffer data from udp/canet
        void publishMsg(); 
    private:
        uint16 speedtemp = 0;
        int16 steertemp = 0;
        float32 vehicleSpeed = 0.0;
        float32 steerAngle = 0.0;
        sCanetSettings canetSettings;

        ros::Publisher pub_;
        ros::Subscriber sub_;
};


#endif
