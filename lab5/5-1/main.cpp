//
// Created by pietyr on 11.01.2026.
//

#include <iostream>
#include <numeric>
#include <set>
#include <vector>

using namespace std;

pair<int, int> duplicate(vector<int> v) {
    set<int> s;
    int dupl = 0;
    for (auto x : v) {
        if (s.count(x) > 0) {
            dupl = x;
            continue;
        }
        s.insert(x);
    }
    int sum = accumulate(s.begin(), s.end(), 0);
    return make_pair(dupl, sum);
}

int main() {

    vector<int> v = {1, 2, 5, 4, 5};

    pair<int, int> ret = duplicate(v);
    cout << "Wartosc zduplikowana: " << ret.first << ", suma elementow: " << ret.second << endl;


    return 0;
}