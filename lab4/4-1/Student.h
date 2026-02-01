//
// Created by pietyr on 1.02.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H


#include<iostream>
using namespace std;

class Student {
private:
    int mark;

    string name;

public:
    Student(int mark, string name);

    int getMark() const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
