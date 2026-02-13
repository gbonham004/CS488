import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nhu.nguyen/turtlebot4_ws/install/lab1_pkg'
