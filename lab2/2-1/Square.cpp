//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include "Figure.h"
#include "Square.h"

using namespace std;

Square::Square(const float newA) : Figure() {
    a = newA;
    cout << "Konstruktor klasy pochodnej - Square" << endl;
}

Square::~Square() {
    cout << "Destruktor klasy pochodnej - Square" << endl;
}

void Square::calculateArea() {
    float area = a * a;
    setArea(area);
}

void Square::show() const {
    cout << "Show w klasie Square, Pole: " << getArea() << "; Obwód: " << getPerimeter() << endl;
}

void Square::calculatePerimeter() {
    const float perimeter = 4.0 * a;
    setPerimeter(perimeter);
}
