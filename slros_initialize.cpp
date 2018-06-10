#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "hoffmansubsystem";

// For Block hoffmansubsystem/Subscribe3
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_hoffmansubsystem_nav_msgs_Odometry> Sub_hoffmansubsystem_102;

// For Block hoffmansubsystem/Velocity from control block 
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_hoffmansubsystem_geometry_msgs_Twist> Sub_hoffmansubsystem_150;

// For Block hoffmansubsystem/Publish for follower vel
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_hoffmansubsystem_geometry_msgs_Twist> Pub_hoffmansubsystem_21;

// For Block hoffmansubsystem/Publish1
SimulinkPublisher<visualization_msgs::InteractiveMarkerPose, SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9> Pub_hoffmansubsystem_88;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

