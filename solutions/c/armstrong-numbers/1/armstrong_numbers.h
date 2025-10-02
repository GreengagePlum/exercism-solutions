#ifndef ARMSTRONG_NUMBERS_H
#define ARMSTRONG_NUMBERS_H

#include <stdbool.h>

int myPow(int x, int n);

int number_of_digits(int num);

int calculate_armstrong_number(int num, int digits);

bool is_armstrong_number(int candidate);

#endif
