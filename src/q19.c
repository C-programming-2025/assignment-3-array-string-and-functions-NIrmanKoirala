//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.

#include <stdio.h>
void calculateFactorialSeries(int n) {
    int i, j;
    for(i = 0; i <= n; i++) {
        int factorial = 1;
        for(j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("Factorial of %d is: %d\n", i, factorial);
    }
}