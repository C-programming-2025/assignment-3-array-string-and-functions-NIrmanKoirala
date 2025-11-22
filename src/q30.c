//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
int countOccurrencesHelper(const char* str, char ch, int index) {
    if (str[index] == '\0') {
        return 0; // Base case: end of string
    }
    // Check if the current character matches ch
    int count = (str[index] == ch) ? 1 : 0;
    // Recursive call for the next character
    return count + countOccurrencesHelper(str, ch, index + 1);
}
int countOccurrences(const char* str, char ch) {
    return countOccurrencesHelper(str, ch, 0);
}
int main() {
    const char* str = "hello world";
    char ch = 'o';
    int count = countOccurrences(str, ch);
    printf("The character '%c' appears %d times in the string \"%s\".\n", ch, count, str);
    return 0;
}