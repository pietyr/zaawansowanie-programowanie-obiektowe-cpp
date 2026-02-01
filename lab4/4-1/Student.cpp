//
// Created by pietyr on 1.02.2026.
//

#include "Student.h"

Student::Student(int mark, string name) {
    this->mark = mark;
    this->name = name;
}

int Student::getMark() const {
    return mark;
}
