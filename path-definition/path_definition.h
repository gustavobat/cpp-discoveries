//
// Created by Gustavo Batistela on 3/18/21.
//

#ifndef PATH_DEFINITION_H
#define PATH_DEFINITION_H

#include <iostream>

#define USE_VAL2

#define VAL1 1
#define VAL2 2

#ifdef USE_VAL2
#define VAL VAL2
#else
#define VAL VAL1
#endif

static void print_val_impl() {
    std::cout << VAL << '\n';
}

void print_val();

#endif // PATH_DEFINITION_H
