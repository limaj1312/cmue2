#!/bin/bash
gcc -Wall -c bsm.c -std=c99
g++ -Wall -c EventRateBSM_arg4.cc
g++ -Wall EventRateBSM_arg4.o bsm.o -lglobes -lgsl -lgslcblas -O3 -o EventRateBSM_arg4
./EventRateBSM_arg4 
rm *.o