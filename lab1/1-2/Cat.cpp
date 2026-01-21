//
// Created by pietyr on 21.01.2026.
//

#include "Cat.h"

Cat::Cat(const string &name) : Animal(4, name, false) {
}

void Cat::initMice(const int numberOfMice[5]) {
    for (int i = 0; i < 5; i++) {
        mice[i] = numberOfMice[i];
    }
}

void Cat::initCat(const int newLevelOfMouseHunting, const int numberOfMice[5]) {
    this->levelOfMouseHunting = newLevelOfMouseHunting;
    initMice(numberOfMice);
}

void Cat::setLevelOfMouseHunting(int newLevelOfMouseHunting) {
    this->levelOfMouseHunting = newLevelOfMouseHunting;
}

int Cat::getLevelOfMouseHunting() const {
    return levelOfMouseHunting;
}

int Cat::getMice(const int index) const {
    if (index >= 0 && index < 5) {
        return mice[index];
    }
    cout << "Nieprawidłowy indeks" << endl;
    return -1;
}

void Cat::giveVoice() {
    cout << "Miau, miau" << endl;
}

void Cat::info() {
    Animal::info();
    cout << "Cat" << endl;
    cout << "Level of mouse hunting: " << levelOfMouseHunting << endl;
    cout << "Number of mice hunted in the last 5 years: ";
    for (int i = 0; i < 5; i++) {
        cout << "Year " << i + 1 << ", hunted: " << mice[i] << " mices; " << endl;
    }
    cout << endl;
}
