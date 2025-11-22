// Write a function named findFactorial that takes an integer as input and returns its factorial.

#include <stdio.h>
int findFactorial(int n) {
    if(n < 0) {
        return -1; // Factorial not defined for negative numbers
    }
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
