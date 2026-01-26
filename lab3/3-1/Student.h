//
// Created by pietyr on 26.01.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H

#include <iostream>

using namespace std;

template<typename T>
class Student {
private:
    string name;
    int mark;

public:
    Student(const string &name, const int mark) {
        this->name = name;
        this->mark = mark;
    }

    Student() = default;

    void show() const {
        cout << "Imie: " << name << ", ocena: " << mark << endl;
    }

    void showMark() const {
        cout << mark << endl;
    }
};

template<>
void Student<int>::showMark() const {
    cout << "Twoja ocena to:" << mark << endl;
}

template<>
class Student<string> {
private:
    string name;
    int mark;

public:
    Student(const string &name, const int mark) {
        this->name = name;
        this->mark = mark;
    }

    Student() = default;

    void show() const {
        cout << "Imie: " << name << ", ocena: " << mark << endl;
    }

    int showMark() const {
        string word[6] = {"jedynka", "dwójka", "trójka", "czwórka", "piątka", "szóstka"};
        cout << "Twoja ocena to:" << word[mark - 1] << endl;
        return mark;
    }
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_STUDENT_H
