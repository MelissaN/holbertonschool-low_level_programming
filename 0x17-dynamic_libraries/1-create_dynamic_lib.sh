#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
