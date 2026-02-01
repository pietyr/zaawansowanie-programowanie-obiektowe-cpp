//
// Created by pietyr on 1.02.2026.
//

#ifndef ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_COMPARE_H
#define ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_COMPARE_H

#include "Student.h"

class Compare {
public:
    bool operator( )(Student &s1, Student &s2) const;
};


#endif //ZAAWANSOWANIE_PROGRAMOWANIE_OBIEKTOWE_CPP_COMPARE_H
