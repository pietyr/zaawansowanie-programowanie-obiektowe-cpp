//
// Created by pietyr on 20.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
#include "Person.h"

#include <iostream>
using namespace std;

class Student: public Person {
private:
    string index;
public:
    Student(const string &name, const string &surname, int age, const string &index);
    Student();
    void setIndex(int newIndex);
    string getIndex() const;
    void showInfoStudent() const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H