#include "ros/ros.h"
#include "instruct_mission/multimodal_parser.h"
#include <stdlib.h>
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "err.h"
#include "ros/ros.h"
#include "instruct_mission/multimodal_srv.h"
#include "instruct_mission/multimodal_values.h"
#include "instruct_mission/multimodal_lisp.h"
#include "mhri_msgs/multimodal_action.h"
#include "mhri_msgs/multimodal.h"
#include "mhri_srvs/multimodal_srv.h"

//#include "agent_mission/GeniusMsg.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64.h"
#include "geometry_msgs/Transform.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Twist.h"
#include <gazebo_msgs/SetModelState.h>
#include <gazebo_msgs/GetModelState.h>
#include <gazebo_msgs/GetPhysicsProperties.h>
#include <geographic_msgs/GeoPose.h>
#include <sstream>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{

  ros::init(argc, argv, "checker");
  ros::NodeHandle n;

  while(ros::ok())
    {
      
    }
  
  system("killall gnome-terminal");

  return 0;
}
