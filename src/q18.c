// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.

#include <stdio.h>
void findPrimeNumbers(int n) {
    int i, j, isPrime;
    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}