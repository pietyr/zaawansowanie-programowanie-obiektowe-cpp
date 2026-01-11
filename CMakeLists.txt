cmake_minimum_required(VERSION 4.1)
project(zaawansowanie_programowanie_obiektowe_cpp)

set(CMAKE_CXX_STANDARD 26)

find_package(Boost REQUIRED)

add_executable(lab1 lab1/main.cpp)
add_executable(lab5-1 lab5/5-1/main.cpp)
add_executable(lab5-2 lab5/5-2/main.cpp)
add_executable(lab6-2 lab6/6-2/main.cpp
        lab6/6-2/Contact.cpp
        lab6/6-2/Contacts.cpp)

target_link_libraries(lab6-2 Boost::boost)
