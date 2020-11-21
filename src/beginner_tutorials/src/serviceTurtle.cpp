#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"

int main(int argc, char **argv){
	ros::init(argc, argv, "serviceturtle");

	ros::NodeHandle n;

	ros::Publisher velocity_publisher = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

	
	ros::Rate loop_rate(10);
	
	geometry_msgs::Twist vel_msg;
	while(ros::ok()){
		vel_msg.linear.x = 2;
		velocity_publisher.publish(vel_msg);	
	}


	return 0;
}

