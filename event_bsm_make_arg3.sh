#!/bin/bash
gcc -Wall -c bsm.c -std=c99
g++ -Wall -c EventRateBSM_arg3.cc
g++ -Wall EventRateBSM_arg3.o bsm.o -lglobes -lgsl -lgslcblas -O3 -o EventRateBSM_arg3
./EventRateBSM_arg3 
rm *.o