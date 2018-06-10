#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block hoffmansubsystem/Subscribe3
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_hoffmansubsystem_nav_msgs_Odometry> Sub_hoffmansubsystem_102;

// For Block hoffmansubsystem/Velocity from control block 
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_hoffmansubsystem_geometry_msgs_Twist> Sub_hoffmansubsystem_150;

// For Block hoffmansubsystem/Publish for follower vel
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_hoffmansubsystem_geometry_msgs_Twist> Pub_hoffmansubsystem_21;

// For Block hoffmansubsystem/Publish1
extern SimulinkPublisher<visualization_msgs::InteractiveMarkerPose, SL_Bus_hoffmansubsystem_InteractiveMarkerPose_av2ao9> Pub_hoffmansubsystem_88;

void slros_node_init(int argc, char** argv);

#endif
