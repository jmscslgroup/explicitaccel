#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "explicitaccel";

// For Block explicitaccel/MicroAccel/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_explicitaccel_std_msgs_Float64MultiArray> Sub_explicitaccel_599;

// For Block explicitaccel/MicroAccel/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Sub_explicitaccel_576;

// For Block explicitaccel/MicroAccel/Subscribe4
SimulinkSubscriber<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Sub_explicitaccel_624;

// For Block explicitaccel/MicroAccel/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Sub_explicitaccel_562;

// For Block explicitaccel/MicroAccel/Subscribe8
SimulinkSubscriber<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Sub_explicitaccel_559;

// For Block explicitaccel/MicroAccel/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_explicitaccel_geometry_msgs_Twist> Pub_explicitaccel_592;

// For Block explicitaccel/MicroAccel/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Pub_explicitaccel_609;

// For Block explicitaccel/MicroAccel/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Pub_explicitaccel_610;

// For Block explicitaccel/MicroAccel/Publish4
SimulinkPublisher<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Pub_explicitaccel_611;

// For Block explicitaccel/MicroAccel/Publish5
SimulinkPublisher<std_msgs::Float64, SL_Bus_explicitaccel_std_msgs_Float64> Pub_explicitaccel_612;

// For Block explicitaccel/MicroAccel/Publish6
SimulinkPublisher<std_msgs::Bool, SL_Bus_explicitaccel_std_msgs_Bool> Pub_explicitaccel_635;

// For Block explicitaccel/MicroAccel/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_explicitaccel_585;

// For Block explicitaccel/MicroAccel/Get Parameter1
SimulinkParameterGetter<boolean_T, bool> ParamGet_explicitaccel_631;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

