//
// Created by pietyr on 26.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CIRCLE_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CIRCLE_H
#include "Figure.h"


class Circle : public Figure {
private:
    float r;

public:
    Circle(float newR);

    ~Circle();

    virtual void calculateArea() override;

    virtual void calculatePerimeter() override;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_CIRCLE_H
