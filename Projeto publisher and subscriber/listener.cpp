#include "ros/ros.h"
#include "std_msgs/Int64.h"

void chatterCallback(const std_msgs::Int64::ConstPtr& msg)
{
  int64_t num = 1; 
  ROS_INFO("a soma entre [%d] e [%d] eh igual a:[%d] ", msg->data, num, num + msg->data ); //soma entre os int
}


int main(int argc, char **argv)
{
 
  ros::init(argc, argv, "listener");

 
  ros::NodeHandle n;


  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);

  ros::spin();

  return 0;
}