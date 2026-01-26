//
// Created by pietyr on 26.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ADDING_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ADDING_H

#include <iostream>

using namespace std;

template<typename T>
class Adding {
private:
    T element;

public:
    Adding(T value);

    void add(T value);

    void show() const;
};

template<typename T>
Adding<T>::Adding(T value) {
    element = value;
}

template<typename T>
void Adding<T>::add(T value) {
    element = element + value;
}

template<typename T>
void Adding<T>::show() const {
    cout << "Element: " << element << endl;
}


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_ADDING_H
