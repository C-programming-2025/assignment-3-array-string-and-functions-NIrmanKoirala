// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include <stdio.h>
int calculateFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calculateFactorial(n - 1);
}