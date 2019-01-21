#project name
project(hongStudyCpp)

#cmake minimum version
cmake_minimum_required(VERSION 3.5.1)

#compiler
set(CMAKE_CXX_STANDARD 11)

#binary name
set(BIN_NAME hongStudyCpp)

#source list
set(SRC_LIST
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/dijkstra.cpp
    ${CMAKE_SOURCE_DIR}/src/greedy.cpp
    ${CMAKE_SOURCE_DIR}/src/dp.cpp
    ${CMAKE_SOURCE_DIR}/src/1719_delivery.cpp
    ${CMAKE_SOURCE_DIR}/src/11399_atm.cpp
    ${CMAKE_SOURCE_DIR}/src/11047_coin.cpp
    ${CMAKE_SOURCE_DIR}/src/1003_fibonacci.cpp
)

#include files
include_directories(BIN_NAME
    ${CMAKE_SOURCE_DIR}/include
)

#make executable file
add_executable(${BIN_NAME} ${SRC_LIST})
