#!/bin/bash
 wget -q -O /tmp/librandy1.so https://github.com/Ceteris90/alx-low_level_programming/blob/749c5ef97f6480c4c1e83136abd816ac49b621c6/0x18-dynamic_libraries/100-operations.so
 export LD_PRELOAD=/tmp/librandy1.so
