//
// Created by pietyr on 26.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_SQUARE_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_SQUARE_H
#include "Figure.h"


class Square : public Figure {
private:
    float a;

public:
    Square(float newA);

    ~Square();

    virtual void calculateArea() override;

    virtual void show() const override;

    virtual void calculatePerimeter() override;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_SQUARE_H
