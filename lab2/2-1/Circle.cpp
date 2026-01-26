//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include "Figure.h"
#include "Circle.h"

using namespace std;

Circle::Circle(const float newR) {
    r = newR;
    cout << "Konstruktor klasy pochodnej - Circle" << endl;
}

Circle::~Circle() {
    cout << "Destruktor klasy pochodnej - Circle" << endl;
}

void Circle::calculateArea() {
    const float area = 3.14 * r * r;
    setArea(area);
}

void Circle::calculatePerimeter() {
    const float perimeter = 2.0 * 3.14 * r;
    setPerimeter(perimeter);
}
