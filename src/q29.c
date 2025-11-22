// Write a recursive function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include <stdio.h>
#include <string.h>
int isPalindromeHelper(const char* str, int left, int right) {
    if (left >= right) {
        return 1; // Base case: all characters matched
    }
    if (str[left] != str[right]) {
        return 0; // Characters do not match
    }
    // Recursive call
    return isPalindromeHelper(str, left + 1, right - 1);
}