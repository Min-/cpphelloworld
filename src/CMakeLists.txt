cmake_minimum_required(VERSION 3.2)
project(cpphelloworld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")

add_executable(helloworld main.cpp)
add_executable(stack main_stack.cpp)
