// Write a C program to check if a given string is a palindrome.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, length, isPalindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces
    
    // Calculate length manually
    length = 0;
    while(str[length] != '\0' && str[length] != '\n'){
        length++;
    }
    
    // Check for palindrome
    for(i = 0; i < length / 2; i++){
        if(str[i] != str[length - i - 1]){
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}