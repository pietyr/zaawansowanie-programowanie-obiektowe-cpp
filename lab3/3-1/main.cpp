//
// Created by pietyr on 26.01.2026.
//
#include <iostream>

#include "Adding.h"
#include "Student.h"
using namespace std;

template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void showAll(T *tab[], int n) {
    for (int i = 0; i < n; i++) {
        tab[i]->show();
    }
}

template<typename T>
void checkType(T a) {
    // Klasa do sprawdzania typów podstawowych np. maxymalnej wartości
    T val = numeric_limits<T>::max();
    cout << val << endl;
}

int main() {
    cout << "Swap:" << endl;
    int a = 6;
    int b = 8;
    cout << "Przed: " << a << ", " << b << endl;
    mySwap<int>(a, b);
    cout << "Po: " << a << ", " << b << endl;

    cout << endl << "Adding:" << endl;
    Adding<int> a1(5);
    a1.add(6);
    a1.show();

    Adding<string> a2("Pro");
    a2.add("gramowanie");
    a2.show();

    cout << endl << "Szablony specjalizowane, klasa Student:" << endl;
    Student<float> s("Ala", 5);
    s.showMark();
    Student<int> s1("Ala", 5);
    s1.showMark();
    Student<string> s2("Ala", 5);
    s2.showMark();

    cout << endl << "showAll:" << endl;
    cout << "Adding:" << endl;
    Adding<int> *arrAdd[3];
    for (int i = 0; i < 3; i++) {
        arrAdd[i] = new Adding<int>(i);
    }
    showAll(arrAdd, 3);

    cout << endl << "Student:" << endl;
    Student<string> *arrStu[2];
    for (int i = 0; i < 2; i++) {
        arrStu[i] = new Student<string>("Ala", i + 2);
    }
    showAll(arrStu, 2);

    for (int i = 0; i < 3; i++) {
        delete arrAdd[i];
    }

    for (int i = 0; i < 2; i++) {
        delete arrStu[i];
    }

    cout << endl << "checkType:" << endl;
    checkType<int>(3);

    return 0;
}
