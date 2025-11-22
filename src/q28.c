// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void calculateBinaryHelper(int n, char* result, int* index) {
    if (n == 0) {
        return;
    }
    // Recursive call with n divided by 2
    calculateBinaryHelper(n / 2, result, index);
    // Append the remainder (0 or 1) to the result
    result[(*index)++] = (n % 2) + '0';
}