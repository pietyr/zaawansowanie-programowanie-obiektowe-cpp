//
// Created by pietyr on 26.01.2026.
//
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void show(T &con) {
    for (typename T::iterator it = con.begin(); it != con.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void printEl(int &el) {
    cout << el << "***";
}

void add10(int &el) {
    el += 10;
}

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    cout << "Vector" << endl;

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
    cout << endl;

    show(vec);
    vec.pop_back(); // Usunięcie ostatniego elementu
    show(vec);
    // Usunięcie elementu z zakresu [a,b) w tym przypadku 2 element kontenera
    vec.erase(vec.begin() + 1, vec.begin() + 2);
    show(vec);
    vec.insert(vec.begin() + 1, 100); // Wstawienie elementu pod wskazany adres
    show(vec);
    vec.clear(); // Wyczyszczenie zawartości kontenera
    show(vec);
    cout << endl;

    // Stworzenie vectora o długości 5 i wypełnienie go wartościami 8.2
    vector<float> vec2(5, 8.2);
    show(vec2);
    vec2.push_back(3.1);
    show(vec2);

    cout << endl << "Algorytmy uogólnione" << endl;

    vector<int> num = {3, 6, 3, 8, 9, 1, 3}; // Stworzenie kontenera z liczbami
    show(num);
    sort(num.begin(), num.end()); // Posortowanie
    show(num);
    cout << "binary search" << endl;

    // Wyszukanie liczby 3
    cout << binary_search(num.begin(), num.end(), 3) << endl;

    // Zliczanie ile razy występuje liczba 3
    cout << "count" << endl;
    cout << count(num.begin(), num.end(), 3) << endl;

    // Odwrócenie kolejności części kontenera
    cout << "reverse" << endl;
    reverse(num.begin(), num.begin() + 4);
    show(num);

    // Zmiana kolejności elementów
    cout << "random_shuffle" << endl;
    random_shuffle(num.begin(), num.end());
    show(num);

    // Wyszukanie elementu maksymalnego (funkcja zwraca iterator)
    cout << "max_element" << endl;
    cout << *max_element(num.begin(), num.end()) << endl;

    // Złączenie dwóch posortowanych kontenerów (wstawienie jednego wewnątrz drugiego)
    cout << "merge" << endl;
    vector<int> num2(4, 6);
    vector<int> res(num.size() + num2.size());
    sort(num.begin(), num.end()); // merge wymaga, aby oba kontenery były posortowane
    cout << "num:";
    show(num);
    cout << "num2:";
    show(num2);
    merge(num.begin(), num.end(), num2.begin(), num2.end(), res.begin());
    show(res);
    cout << endl;

    // Przekazywanie funkcji do algorytmów
    cout << "Przekazywanie funkcji" << endl;
    cout << "for_each" << endl;
    for_each(num.begin(), num.end(), printEl);
    for_each(num.begin(), num.end(), add10);
    cout << endl;
    for_each(num.begin(), num.end(), printEl);
    cout << endl;
    cout << "count_if" << endl;
    cout << count_if(num.begin(), num.end(), isEven) << endl;

    cout << endl;
    cout << "Funktory" << endl;


    return 0;
}


