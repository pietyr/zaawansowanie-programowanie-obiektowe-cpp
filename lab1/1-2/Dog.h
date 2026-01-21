//
// Created by pietyr on 21.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_DOG_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_DOG_H

#include <iostream>

#include "Animal.h"

using namespace std;

class Dog : public Animal {
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;

public:
    Dog(const string &name, const string &breed, int levelOfGuideSkills, int levelOfTrackerSkills);

    Dog(const string &name);

    void setSkillLevel(int type, int value);

    int getSkillLevel(int type) const;

    void giveVoice();

    void info();
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_DOG_H
