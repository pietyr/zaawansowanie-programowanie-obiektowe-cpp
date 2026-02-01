//
// Created by pietyr on 1.02.2026.
//

#include "Even.h"

Even::Even(int divider) {

    this->divider = divider;
}

bool Even::operator()(int x) const {
    return x % divider == 0;
}
