// Write a C program to concatenate two strings without using the built-in string functions.

#include<stdio.h>

int main(){
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // Read string with spaces

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); // Read string with spaces

    // Find the length of the first string
    i = 0;
    while(str1[i] != '\0' && str1[i] != '\n'){
        i++;
    }

    // Concatenate str2 to str1
    j = 0;
    while(str2[j] != '\0' && str2[j] != '\n'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string is: %s\n", str1);

    return 0;
}