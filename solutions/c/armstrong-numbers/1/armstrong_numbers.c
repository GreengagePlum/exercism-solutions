#include "armstrong_numbers.h"
#include <stdbool.h>

int myPow(int x, int n) {
    if (n > 0) {
        return x * myPow(x, n-1);
    } else {
        return 1;
    }
}

int number_of_digits(int num) {
    if (num >= 10) {
        return 1 + number_of_digits(num / 10);
    } else {
        return 1;
    }
}

int calculate_armstrong_number(int num, int digits) {
    if (num >= 10) {
        return (myPow((num % 10), digits) + calculate_armstrong_number((num / 10), digits));
    } else {
        return myPow((num % 10), digits);
    }
}

bool is_armstrong_number(int candidate){
    return (candidate == calculate_armstrong_number(candidate, number_of_digits(candidate)));
}
