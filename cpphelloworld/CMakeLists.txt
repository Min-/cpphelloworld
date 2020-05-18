cmake_minimum_required(VERSION 3.2)
project(cpphelloworld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp)
add_executable(helloworld ${SOURCE_FILES})
