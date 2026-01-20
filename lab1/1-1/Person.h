//
// Created by pietyr on 20.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_PERSON_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    string surname;
    int age;
public:
    Person(const string &name, const string &surname, int age);
    Person();
    void setAge(int newAge);
    string getSurname() const;
    bool is_18() const;
    void showInfoPerson() const;
    void init(const string &newName, const string &newSurname, int newAge);
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_PERSON_H