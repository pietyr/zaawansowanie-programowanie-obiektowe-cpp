//
// Created by pietyr on 11.01.2026.
//

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Contact {
    public:
    string imie;
    string nazwisko;
    int wiek;
    string telefon;
    string ulica;

Contact(string imie, string nazwisko, int wiek, string telefon, string ulica)
        : imie(std::move(imie)),
          nazwisko(std::move(nazwisko)),
          wiek(wiek),
          telefon(std::move(telefon)),
          ulica(std::move(ulica)) {
    }
};