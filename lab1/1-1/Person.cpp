//
// Created by pietyr on 20.01.2026.
//
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(const string &name, const string &surname, const int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    cout << "Konstruktor klasy bazowej - Person" << endl;
}

Person::Person() {
    cout << "Konstruktor bezparametryczny klasy bazowej - Person" << endl;
}

void Person::setAge(const int newAge) {
    this->age = newAge;
}

string Person::getSurname() const {
    return surname;
}

bool Person::is_18() const {
    return age >= 18;
}

void Person::showInfoPerson() const {
    cout << "Imie: " << name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Wiek: " << age << endl;
}

void Person::init(const string &newName, const string &newSurname, const int newAge) {
    this->name = newName;
    this->surname = newSurname;
    this->age = newAge;
}
