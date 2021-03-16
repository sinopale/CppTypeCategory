#############################
# Author : Semih Yavuz
# Date   : March 16th, 2021
# Desc   : Template meta programming
###################################

cmake_minimum_required(VERSION 3.10)

project(FunctionalProgrammingBasics VERSION 1.0)

set(SOURCES main.cpp TypeInfo.h)

add_executable(t1 ${SOURCES})

