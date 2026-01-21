//
// Created by pietyr on 21.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ANIMAL_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ANIMAL_H
#include <iostream>

using namespace std;

class Animal {
private:
    int limbNr;
    string name;
    bool protectedAnimal;

public:
    Animal(int limbNr, const string &name, bool protectedAnimal = true);

    Animal();

    int getLimbNr() const;

    void setLimbNr(int newLimbNr);

    string getName() const;

    void setName(const string &newName);

    bool isProtectedAnimal() const;

    void setProtectedAnimal(bool newProtectedAnimal);

    void giveVoice();

    void info();
};
#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ANIMAL_H
