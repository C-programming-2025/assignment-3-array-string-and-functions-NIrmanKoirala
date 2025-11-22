// Implement a C program to count the occurrence of a specific character in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], ch;
    int i, count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces
    
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    
    // Counting occurrences of the character
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    
    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    
    return 0;
}