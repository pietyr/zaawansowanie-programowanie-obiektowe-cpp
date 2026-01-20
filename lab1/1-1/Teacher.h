//
// Created by pietyr on 20.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_TEACHER_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_TEACHER_H
#include "Person.h"

class Teacher: public Person {
private:
    int experience;
    string title;
public:
    Teacher(const string &name, const string &surname, int age, int experience, const string &title);
    Teacher();
    void setTitle(const string &newTitle);
    int getExperience() const;
    bool is_Phd() const;
    void showInfoTeacher() const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_TEACHER_H