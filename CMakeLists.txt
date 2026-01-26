cmake_minimum_required(VERSION 4.1)
project(zaawansowanie_programowanie_obiektowe_cpp)

set(CMAKE_CXX_STANDARD 26)

find_package(Boost REQUIRED)

add_executable(lab1-1 lab1/1-1/main.cpp
        lab1/1-1/Person.cpp
        lab1/1-1/Person.h
        lab1/1-1/Teacher.cpp
        lab1/1-1/Teacher.h
        lab1/1-1/Student.cpp
        lab1/1-1/Student.h)
add_executable(lab1-2 lab1/1-2/main.cpp
        lab1/1-2/Animal.cpp
        lab1/1-2/Animal.h
        lab1/1-2/Dog.cpp
        lab1/1-2/Dog.h
        lab1/1-2/Cat.cpp
        lab1/1-2/Cat.h)
add_executable(lab2-1
        lab2/2-1/main.cpp
        lab2/2-1/Figure.cpp
        lab2/2-1/Figure.h
        lab2/2-1/Square.cpp
        lab2/2-1/Square.h
        lab2/2-1/Circle.cpp
        lab2/2-1/Circle.h)
add_executable(lab5-1 lab5/5-1/main.cpp)
add_executable(lab5-2 lab5/5-2/main.cpp)
add_executable(lab6-2 lab6/6-2/main.cpp
        lab6/6-2/Contact.cpp
        lab6/6-2/Contacts.cpp)

target_link_libraries(lab6-2 Boost::boost)
