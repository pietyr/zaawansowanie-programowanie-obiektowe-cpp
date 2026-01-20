//
// Created by pietyr on 20.01.2026.
//
#include <iostream>
#include "Teacher.h"

Teacher::Teacher(const string &name, const string &surname, const int age, const int experience, const string &title) {
    this->experience = experience;
    this->title = title;
    cout << "Konstruktor klasy pochodnej - Teacher" << endl;
}

Teacher::Teacher() {
    cout << "Konstruktor bezparametryczny klasy pochodnej - Teacher" << endl;
}

void Teacher::setTitle(const string &newTitle) {
    this->title = newTitle;
}

int Teacher::getExperience() const {
    return experience;
}

bool Teacher::is_Phd() const {
    return title == "Phd";
}

void Teacher::showInfoTeacher() const {
    showInfoPerson();
    cout << "Staz pracy: " << experience << endl;
    cout << "Tytul naukowy: " << title << endl;
}
