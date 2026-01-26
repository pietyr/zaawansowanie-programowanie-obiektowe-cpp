//
// Created by pietyr on 26.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_FIGURE_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_FIGURE_H


class Figure {
private:
    float area;
    float perimeter;

public:
    Figure();

    virtual ~Figure();

    float getArea() const;

    void setArea(float newArea);

    // = 0 oznacza metodę czysto wirtualną - taką która musi być nadpisana w pierwszej nieabstrakcyjnej klasie pochodnej
    virtual void calculateArea() = 0;

    float getPerimeter() const;

    void setPerimeter(float newPerimeter);

    virtual void calculatePerimeter() = 0;

    // Metoda wirtualna - nie musi być nadpisana w klasie pochodnej
    virtual void show() const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_FIGURE_H
