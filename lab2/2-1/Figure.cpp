//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure() {
    cout << "Konstruktor klasy bazowej Figure" << endl;
}

Figure::~Figure() {
    cout << "Wirtualny destruktor klasy bazowej Figure" << endl;
}

float Figure::getArea() const {
    return area;
}

void Figure::setArea(const float newArea) {
    area = newArea;
}

float Figure::getPerimeter() const {
    return perimeter;
}

void Figure::setPerimeter(const float newPerimeter) {
    perimeter = newPerimeter;
}

void Figure::show() const {
    cout << "Pole: " << area << "; Obwód: " << getPerimeter() << endl;
}
