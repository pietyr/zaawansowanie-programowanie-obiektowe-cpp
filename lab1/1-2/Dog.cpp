//
// Created by pietyr on 21.01.2026.
//

#include "Dog.h"

Dog::Dog(const string &name, const string &breed, const int levelOfGuideSkills,
         const int levelOfTrackerSkills) : Animal(4, name, false) {
    this->breed = breed;
    this->levelOfGuideSkills = levelOfGuideSkills;
    this->levelOfTrackerSkills = levelOfTrackerSkills;
    cout << "Konstruktor parametryczny klasy pochodnej - Dog, inicjalizujący wszystkie składowe" << endl;
}

Dog::Dog(const string &name) : Animal(4, name, false) {
    cout << "Konstruktor parametryczny klasy pochodnej - Dog, inicjalizujący tylko składowe klasy Animal" << endl;
}


void Dog::setSkillLevel(int type, int value) {
    if (type == 1) {
        levelOfGuideSkills = value;
    } else if (type == 2) {
        levelOfTrackerSkills = value;
    } else {
        cout << "Nieprawidłowy typ umiejętności" << endl;
        cout << "Przewodnik: 1" << endl;
        cout << "Tropiciel: 2" << endl;
    }
}

int Dog::getSkillLevel(int type) const {
    if (type == 1) {
        return levelOfGuideSkills;
    } else if (type == 2) {
        return levelOfTrackerSkills;
    } else {
        cout << "Nieprawidłowy typ umiejętności" << endl;
        cout << "Przewodnik: 1" << endl;
        cout << "Tropiciel: 2" << endl;
        return 0;
    }
}

void Dog::giveVoice() {
    cout << "Hau, Hau" << endl;
}

void Dog::info() {
    Animal::info();
    cout << "Dog" << endl;
    cout << "Breed: " << breed << endl;
    cout << "Level of guide skills: " << levelOfGuideSkills << endl;
    cout << "Level of tracker skills: " << levelOfTrackerSkills << endl;
}
