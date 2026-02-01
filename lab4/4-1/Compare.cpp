//
// Created by pietyr on 1.02.2026.
//

#include "Compare.h"

bool Compare::operator()(Student &s1, Student &s2) const {
    return s1.getMark() < s2.getMark();
}
