//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read full line including spaces

    // Convert to sentence case
    int capitalize = 1; // Flag to capitalize the next character

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize first letter of word
            capitalize = 0;
        } 
        else if (isspace(str[i])) {
            capitalize = 1;  // Next word starts after space
        } 
        else {
            str[i] = tolower(str[i]);  // Ensure other letters are lowercase
        }
    }

    printf("Output: %s\n", str);

    return 0;
}
