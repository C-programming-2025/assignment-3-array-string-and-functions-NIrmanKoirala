// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.

#include <stdio.h>
void printTriangleHelper(int n, int currentRow) {
    if (currentRow > n) {
        return;
    }
    // Print asterisks for the current row
    for (int i = 0; i < currentRow; i++) {
        printf("*");
    }
    printf("\n");
    // Recursive call for the next row
    printTriangleHelper(n, currentRow + 1);
}