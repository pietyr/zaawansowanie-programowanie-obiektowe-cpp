cmake_minimum_required(VERSION 3.5)
project(zaawansowanie_programowanie_obiektowe_cpp)

set(CMAKE_CXX_STANDARD 26)

#set(BOOST_ROOT "..\\boost_1_90_0")
#find_package(Boost 1.90.0)
#if(NOT Boost_FOUND)
#    message(FATAL_ERROR "Could not find boost!")
#endif()
#message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
#message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
#message(STATUS "Boost_VERSION: ${Boost_VERSION}")
#include_directories(${Boost_INCLUDE_DIR})

add_executable(lab1 lab1/main.cpp)
add_executable(lab5-1 lab5/5-1/main.cpp)
add_executable(lab5-2 lab5/5-2/main.cpp)
add_executable(lab6 lab6/main.cpp)
