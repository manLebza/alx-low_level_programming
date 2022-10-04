#!/bin/bash
gcc -fPIC -c *.c
gcc _shared -Wl,-soname,liball.so -o liball.so *.o
