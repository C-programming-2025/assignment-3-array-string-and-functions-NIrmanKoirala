// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
int countOccurrences(char str[], char ch) {
    int count = 0;
    // Counting occurrences of the character
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}