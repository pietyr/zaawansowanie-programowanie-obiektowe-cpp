//
// Created by pietyr on 1.02.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_EVEN_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_EVEN_H


class Even {
private:
    int divider;
public:
    Even(int divider);
    bool operator()(int x) const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_EVEN_H