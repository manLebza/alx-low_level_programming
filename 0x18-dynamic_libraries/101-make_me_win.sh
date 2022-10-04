#!/bin/bash
wget -p /tmp/ https://raw.github.com/manLebza/alx-low_level_programming/master/0x17-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
