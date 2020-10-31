//
// Created by Omar Shaikh on 2/8/16.
//
//factorial.cpp
#include "factorial.h"

int factorial(int n) {
    int result = 1;
    while(n>0) {
        result *= n;
        n--;
    }
    return result;
}
