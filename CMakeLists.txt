cmake_minimum_required(VERSION 3.0.0)
project(MCPI)

set(CMAKE_CXX_STANDARD 14)

find_package(Threads)

add_executable(MCPI main.cc)