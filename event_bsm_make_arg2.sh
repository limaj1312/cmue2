#!/bin/bash
gcc -Wall -c bsm.c -std=c99
g++ -Wall -c EventRateBSM_arg2.cc
g++ -Wall EventRateBSM_arg2.o bsm.o -lglobes -lgsl -lgslcblas -O3 -o EventRateBSM_arg2
./EventRateBSM_arg2 
rm *.o