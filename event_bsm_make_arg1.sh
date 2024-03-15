#!/bin/bash
gcc -Wall -c bsm.c -std=c99
g++ -Wall -c EventRateBSM_arg1.cc
g++ -Wall EventRateBSM_arg1.o bsm.o -lglobes -lgsl -lgslcblas -O3 -o EventRateBSM_arg1
./EventRateBSM_arg1 
rm *.o