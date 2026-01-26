//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {
    Figure *f1 = new Square(4);
    Figure *f2 = new Circle(3);

    // Sprawdzany jest typ dynamiczny i wywoływana jest odpowiednia met
    f1->calculateArea();
    f1->calculatePerimeter();
    f1->show();
    f2->calculateArea();
    f2->calculatePerimeter();
    f2->show();
    cout << endl;

    // Polimorfizm z przekazaniem referencji
    cout << "Polimorfizm z przekazaniem referencji" << endl;
    Square s1(5);
    Figure *f3 = &s1;
    f3->calculateArea();
    f3->calculatePerimeter();
    f3->show();


    cout << endl;
    // Usuwanie wskaźników, które zostały wywołane z new
    delete f1;
    delete f2;


    return 0;
}
