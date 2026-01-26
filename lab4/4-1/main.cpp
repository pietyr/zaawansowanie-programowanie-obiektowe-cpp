//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // Deklaracja kontenera vector

    // Dodanie liczb na koniec
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Dostęp do elementów przy pomocy operatora []
    cout << "Operator[]" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    cout << endl;

    // Dostęp do elementów za pomocą metody at
    cout << "at()" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
    cout << endl;

    // Dostęp do elementów za pomocą iteratora
    cout << "Iterator" << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << endl; // it przechowuje adres
    }
    cout << endl;

    cout << "begin() " << *vec.begin() << " front() " << vec.front() << endl; // begin iterator, front wartość
    cout << "end() " << *(vec.end() - 1) << " back() " << vec.back() << endl; // end iterator, back wartość

    return 0;
}
