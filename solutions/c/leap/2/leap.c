#include "leap.h"

bool leap_year(int year)
{
    bool divisible_by_four = year % 4 == 0;
    bool divisible_by_hundred = year % 100 == 0;
    bool divisible_by_four_hundred = year % 400 == 0;
    return divisible_by_four && (!divisible_by_hundred || divisible_by_four_hundred);
}
