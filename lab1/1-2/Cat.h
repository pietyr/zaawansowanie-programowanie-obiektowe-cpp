//
// Created by pietyr on 21.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CAT_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CAT_H

#include <iostream>

#include "Animal.h"

using namespace std;

class Cat : public Animal {
private:
    int levelOfMouseHunting;
    int mice[5];

public:
    Cat(const string &name);

    void initMice(const int numberOfMices[5]);

    void initCat(int newLevelOfMouseHunting, const int numberOfMice[5]);

    void setLevelOfMouseHunting(int newLevelOfMouseHunting);

    int getLevelOfMouseHunting() const;

    int getMice(int index) const;

    void giveVoice();

    void info();
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CAT_H
