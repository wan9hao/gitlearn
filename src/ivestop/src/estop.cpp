#include "estop.h"
#include "std_msgs/Int8.h"


estop::estop(ros::NodeHandle nh)
{

    canetSettings.pcIp = "192.168.1.100";
    canetSettings.pcPort = 4007;
    canetSettings.canetIp = "192.168.1.178";
    canetSettings.canetPort = 4007;
    canetSettings.runningmode = 1;

    pub_ = nh.advertise<std_msgs::Int8>("ivestop", 1);

}

estop::~estop()
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
void estop::run(void)
{
    
    boost::asio::io_service io_service;
    Boost_UDP boost_udp(io_service, canetSettings.pcIp, canetSettings.pcPort, canetSettings.canetIp, canetSettings.canetPort);
    boost_udp.start_sock();

    // clear buffers
    memset(udpBufferGroup, 0, sizeof(udpBufferGroup));
    int ret;

    while (ros::ok())
    {
        
        memset(udpBuffer, 0, sizeof(udpBuffer));
        ret = boost_udp.receive_data(udpBuffer);
        if (ret > 0 && ret%13 == 0)
        {
            recVehicleData(ret); // receive raw data from can/udp
        }
        else
        {
            printf("Error: estop node have not received data, or byte number is wrong!\n");
            break;
        }

    }
}


/******************************************************
* Function: recVehicleData()
* Author: Wang Hao
* Date: 2020-01-21
* Description: Get ready information
* Input: num_buf
* Output: None
* Return: None
* Others: None
*******************************************************/
void estop::recVehicleData(uint16 num_buf)
{
    uint8 channel, side;
    uint16 base;
    uint16 num_frame = num_buf / 13;
    std_msgs::Int8 stop;
    

    for (uint16 i = 0; i < num_frame; i++)
    {
        uint16 id = ((uint16)(udpBuffer[i*13+3] << 8) + udpBuffer[i*13+4]);

        if ( id == 0x112 ) //speed
        { 
            stop.data = 1;
        } 
        pub_.publish(stop);


    }
}
