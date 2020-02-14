#include "actuator.h"

// extern void baic_car_longitudinal_custom(real_T IN_shangpoFlag, real_T IN_Shifter, real_T
//   IN_Speed_Command_Planner, real_T IN_Speed_Measured, real_T IN_carBrakeStatus,
//   real_T IN_Longitudinal_acc, real_T *OUT_ACC_TARGET_ACCELERATION, real_T
//   *OUT_accFlag);
// extern void baic_car_longitudinal_initialize();
// int runingFlag  = 0; 


actuator::actuator(ros::NodeHandle nh)
{

    // canetSettings.pcIp = "192.168.1.100";
    // canetSettings.pcPort = 4005;
    // canetSettings.canetIp = "192.168.1.178";
    // canetSettings.canetPort = 4005;
    // canetSettings.runningmode = 1;

    sub_ = nh.subscribe("ivestop",1, &actuator::callback_stop, this);
    pub_ = nh.advertise<ivactuator::ivactuator>("ivactuator", 1000);
    
}

actuator::~actuator()
{
}

/******************************************************
* Function: run()
* Author: Gaoqiang Wu
* Date: 2016-12-12
* Description: the entry
* Input: None
* Output: None
* Return: None
* Others: None
*******************************************************/
void actuator::run(void)
{
    
    // boost::asio::io_service io_service;
    // Boost_UDP boost_udp(io_service, canetSettings.pcIp, canetSettings.pcPort, canetSettings.canetIp, canetSettings.canetPort);
    // boost_udp.start_sock();

    // // clear buffers
    // memset(udpBufferGroup, 0, sizeof(udpBufferGroup));
    // int ret;

    //baic_car_longitudinal_initialize();

    ros::Rate rate(100);
    while (ros::ok())
    {
       
        ros::spinOnce();
        if (flag_stop.data == 1)
        {
            //  memset(udpBuffer, 0, sizeof(udpBuffer));
            // ret = boost_udp.receive_data(udpBuffer);
            // if (ret > 0 && ret%13 == 0)
            //  {
            //     recVehicleData(ret); // receive raw data from can/udp
            //     publishMsg(); //publish 
            flag_stop.data = 0;
            std::cout <<"hello" << std::endl;
         }
         else
         {
             printf("Error: actuator node have not received data, or byte number is wrong!\n");
            
         }
        
        std::cout <<"hello-world" << std::endl;
        rate.sleep();
    }
    
}


/******************************************************
* Function: recVehicleData()
* Author: Xiaofei Li, Qinqin Shi
* Date: 2016-12-12
* Description: Get vehicle speed and steering angle information
* Input: num_buf
* Output: None
* Return: None
* Others: None
*******************************************************/
void actuator::recVehicleData(uint16 num_buf)
{
    uint8 channel, side;
    uint16 base;
    uint16 num_frame = num_buf / 13;

    for (uint16 i = 0; i < num_frame; i++)
    {
        uint16 id = ((uint16)(udpBuffer[i*13+3] << 8) + udpBuffer[i*13+4]);

        if ( id == 0x318 ) //speed
        { 
            speedtemp = ((uint16)(udpBuffer[i*13+10] << 8) + (uint16)(udpBuffer[i*13+11]));
            //speedtemp = ((uint16)(udpBuffer[i*13+8] << 8) + (uint16)(udpBuffer[i*13+9]);
            
            if (speedtemp >= 32768)
            {
                speedtemp -= 65536;
            }
            vehicleSpeed = speedtemp * 0.1;
            //vehicleSpeed = speedtemp * 0.01;
        } 
        if ( id == 0x180 ) //SteerAngle
        { 
            steertemp = ((uint16)(udpBuffer[i*13+8] << 8) + (uint16)(udpBuffer[i*13+9]));
            if (steertemp >= 32768)
            {
                steertemp -= 65536;
            }
            steerAngle = steertemp * 0.1-738;
        } 

        //if ( id == 0x321 ) //SteerAngle
        //{ 
        //    steertemp = ((uint16)(udpBuffer[i*13+5] << 8) + udpBuffer[i*13+6]);
        //    steerAngle = steertemp * 0.1;
        //} 

    }
}

void actuator::publishMsg()
{
    ivactuator::ivactuator msg;

    msg.uisteerangle = steerAngle; //-540~540
    msg.realstrtorque = 0;
    msg.uispeed = vehicleSpeed;
    msg.espaccel = 0;
    msg.shiftlvlposition = 0;
    msg.currentdrvmode = 0;
    msg.sysstatus = 0;
    msg.vehiclesysfault = 0;
    msg.batteryvoltage = 0;
    msg.reserve1 = 0;
    msg.reserve2 = 0;
    msg.reserve3 = 0;
    msg.reserve4 = 0;
    msg.isvalid = true;

    pub_.publish(msg);
}

void actuator::callback_stop(const std_msgs::Int8::ConstPtr msg)
{
    flag_stop = *msg;
}
