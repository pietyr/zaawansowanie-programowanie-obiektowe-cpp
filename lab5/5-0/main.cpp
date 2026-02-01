//
// Created by pietyr on 1.02.2026.
//
#include <iostream>
#include <set>
using namespace std;

void show(set<int> s) {
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(3);
    show(s);


    s.erase(s.begin(), s.find(2));
    show(s);
    s.erase(2);
    cout << s.count(2) << endl;
    return 0;
}

