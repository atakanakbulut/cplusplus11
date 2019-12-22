#!/bin/bash

echo "usage ./build.sh filename"
FILE=$1

g++ $FILE.cpp -o $FILE -std=c++11
