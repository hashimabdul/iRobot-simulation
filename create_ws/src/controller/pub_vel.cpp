#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    ros::init(argc, argv, "random_publisher");
    ros::NodeHandle node;
    
    ros::Publisher pub = node.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);
    
    srand(time(0));
    ros::Rate rate(10);
    
    while(ros::ok())
    {
    
        geometry_msgs::Twist msg;
        msg.linear.x  = 0.2*double(rand())/double(RAND_MAX);
        msg.angular.z = 2*double(rand())/double(RAND_MAX) - 1;
        
        pub.publish(msg);
        
        ROS_INFO_STREAM("Velocity command | " << "linear: " << msg.linear.x << "\tangular:" << msg.angular.z );
        
        rate.sleep();
    }
}
