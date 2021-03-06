#!/usr/bin/env python

import roslib; roslib.load_manifest('json_prolog')
 
import rospy
from json_prolog import json_prolog

if __name__ == '__main__':
    rospy.init_node('test_json_prolog')
    prolog = json_prolog.Prolog()
    query = prolog.query("giveAllObjs(A, [B]).")
    for solution in query.solutions():
        print 'Found solution. B = %s' % (solution['B'])
    query.finish()
