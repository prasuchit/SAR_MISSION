#!/usr/bin/env python

import sys
import rospy
from cmd_mission.srv import *

def salient_objs_client(x):
    rospy.wait_for_service('salient_objs')
    try:
        print "into client"
        start_salient_objs = rospy.ServiceProxy('salient_objs', salient_objs)
        resp1 = start_salient_objs(x)
    print "it worked"
       
        return resp1.result_salient
    except rospy.ServiceException, e:
        print "Service call failed: %s"%e

if __name__ == "__main__":
    print "hello"
    salient_objs_client("hello")
