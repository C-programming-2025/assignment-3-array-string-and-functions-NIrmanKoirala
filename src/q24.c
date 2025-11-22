// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>
int calculatePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * calculatePower(base, exponent - 1);
    }
}