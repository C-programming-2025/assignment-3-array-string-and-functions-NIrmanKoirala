//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include <stdio.h>
int isPalindrome(char str[]) {
    int length = 0;
    // Calculate length manually
    while(str[length] != '\0' && str[length] != '\n'){
        length++;
    }
    // Check for palindrome
    for(int i = 0; i < length / 2; i++){
        if(str[i] != str[length - i - 1]){
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

