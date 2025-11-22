// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calculateGCD(b, a % b);
    }
}