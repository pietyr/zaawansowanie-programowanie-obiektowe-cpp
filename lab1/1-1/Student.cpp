//
// Created by pietyr on 20.01.2026.
//

#include "Student.h"

using namespace std;

Student::Student(const string &name, const string &surname, int age, const string &index)
    : Person(name, surname, age){
    this->index = index;
    cout << "Konstruktor klasy pochodnej - Student" << endl;
}

Student::Student() {
    cout << "Konstruktor bezparametryczny klasy pochodnej - Student" << endl;
}

string Student::getIndex() const {
    return index;
}

void Student::setIndex(const int newIndex) {
    this->index = to_string(newIndex);
}

void Student::showInfoStudent() const {
    showInfoPerson();
    cout << "Numer indeksu: " << index << endl;
}