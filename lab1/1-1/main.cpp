//
// Created by pietyr on 11.01.2026.
//
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {

    cout << endl << "Obiekty klasy Person" << endl;
    Person p1("Jan", "Kowalski", 45);
    p1.showInfoPerson();
    cout << "Czy pełnoletnia?:" << p1.is_18() << endl;
    p1.setAge(16);

    cout << endl << "Obiekty klasy Teacher" << endl;
    Teacher t1("Barbara", "Kowalska", 56, 30, "Phd");
    t1.showInfoTeacher();
    cout << "Czy ma Phd?: " << t1.is_Phd() << endl;

    cout << endl << "Tablice obiektów" << endl;

    Person persons_st_so[3];    // Statyczna tablica Statycznych obiektów
    Person* persons_dt_so;      // Dynamiczna tablica Statycznych obiektów
    Person* persons_st_do[3];   // Statyczna tablica Dynamicznych obiektów
    Person** persons_dt_do;     // Dynamiczna tablica Dynamicznych obiektów

    // Statyczna tablica Statycznych obiektów
    // W momencie deklaracji został wywołany konstruktor bezargumentowy,
    // więc dla tych obiektów wywoływana jest metoda init
    for (int i = 0; i < 3; i++) {
        persons_st_so[i].init("Anna", "Nowak", 20 + i);
        persons_st_so[i].showInfoPerson();
    }

    // Dynamiczna tablica statycznych obiektów. Długość tablicy określona za pomocą operatora new
    // W momencie deklaracji został wywołany konstruktor bezargumentowy,
    // więc dla tych obiektów wywoływana jest metoda init
    persons_dt_so = new Person[3];
    for (int i = 0; i < 3; i++) {
        persons_dt_so[i].init("Ola", "Adamek", 20 + i);
        persons_dt_so[i].showInfoPerson();
    }

    // Statyczna tablica Dynamicznych obiektów
    // Obiekt tworzony za pomocą operatora new i w tym momencie jest wywoływany konstruktor parametrowy
    for (int i = 0; i < 3; i++) {
        persons_st_do[i] = new Person("Kasia", "Kowalska", 20 + i);
        persons_st_do[i]->showInfoPerson();
    }

    // Dynamiczna tablica Dynamicznych obiektów
    // Długość tablicy określona za pomocą operatora new
    // Obiekt tworzony za pomocą operatora new i w tym momencie jest wywoływany konstruktor parametrowy
    persons_dt_do = new Person*[3];
    for (int i = 0; i < 3; i++) {
        persons_dt_do[i] = new Person("Paweł", "Wójcik", 20 + i);
        persons_dt_do[i]->showInfoPerson();
    }

    // Zwolnienie pamięci dla każdego obiektu dynamicznego
    for (int i = 0; i < 3; i++) {
        delete persons_st_do[i];
        delete persons_dt_do[i];
    }

    // Zwolnienie pamięci dla każdej tablicy dynamicznej
    delete[] persons_dt_so;
    delete[] persons_dt_do;

    cout << endl << "Zadanie 1.1" << endl;

    Student students_st_so[3];
    Student* students_dt_so;
    Student* students_st_do[3];
    Student** students_dt_do;

    for (int i = 0; i < 3; i++) {
        students_st_so[i].init("Anna", "Nowak", 20 + i);
        students_st_so[i].setIndex((i + 1) * 100000 + (i + 1) * 97531);
        students_st_so[i].showInfoStudent();
    }

    students_dt_so = new Student[3];
    for (int i = 0; i < 3; i++) {
        students_dt_so[i].init("Ola", "Adamek", 20 + i);
        students_dt_so[i].setIndex((i + 1) * 200000 +  2* (i + 1) * 97531);
        students_dt_so[i].showInfoStudent();
    }

    for (int i = 0; i < 3; i++) {
        students_st_do[i] = new Student("Kasia", "Kowalska", 20 + i, "103624");
        students_st_do[i]->showInfoStudent();
    }

    students_dt_do = new Student*[3];
    for (int i = 0; i < 3; i++) {
        students_dt_do[i] = new Student("Paweł", "Wójcik", 20 + i, "106245");
        students_dt_do[i]->showInfoStudent();
    }

    for (int i = 0; i < 3; i++) {
        delete students_st_do[i];
        delete students_dt_do[i];
    }

    delete[] students_dt_so;
    delete[] students_dt_do;

    return 0;
}