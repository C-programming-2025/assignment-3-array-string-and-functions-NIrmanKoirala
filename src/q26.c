// Write a recursive function named reverseString that takes a string as input and returns the reversed string.

#include <stdio.h>
#include <string.h>
void reverseStringHelper(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call
    reverseStringHelper(str, start + 1, end - 1);
}