#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"

int main(int argc, char **argv){
	ros::init(argc, argv, "serviceTurtle"); //name of the node

	ros::NodeHandle node; //initialization of the node

	ros::Publisher velocity_msg = node.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
	ros::Rate loop_rate(10); //specify a frequency of the loop and stop with Rate::sleep()
	
	geometry_msgs::Twist vel_msg;

	
	vel_msg.linear.x = 2;
	velocity_msg.publish(vel_msg);
	
	

	return 0;

}

