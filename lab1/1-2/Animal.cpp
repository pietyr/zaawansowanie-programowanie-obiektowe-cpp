//
// Created by pietyr on 21.01.2026.
//


#include "Animal.h"

Animal::Animal(const int limbNr, const string &name, const bool protectedAnimal) {
    this->limbNr = limbNr;
    this->name = name;
    this->protectedAnimal = protectedAnimal;

    cout << "Konstruktor parametryczny klasy bazowej - Animal" << endl;
}

Animal::Animal() {
    cout << "Konstruktor bezparametryczny klasy bazowej - Animal" << endl;
}

int Animal::getLimbNr() const {
    return limbNr;
}

void Animal::setLimbNr(const int newLimbNr) {
    this->limbNr = newLimbNr;
}

string Animal::getName() const {
    return name;
}

void Animal::setName(const string &newName) {
    this->name = newName;
}

bool Animal::isProtectedAnimal() const {
    return protectedAnimal;
}

void Animal::setProtectedAnimal(const bool newProtectedAnimal) {
    this->protectedAnimal = newProtectedAnimal;
}

void Animal::giveVoice() {
    cout << "Chrum, miau, hau, piiiii" << endl;
}

void Animal::info() {
    cout << "Animal" << endl;
    cout << "Number of limbs: " << limbNr << endl;
    cout << "Name: " << name << endl;
    cout << "Is protected animal: " << (protectedAnimal ? "yes" : "no") << endl;
}
