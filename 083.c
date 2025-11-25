//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>  // For tolower() and isalpha()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Read input string
    scanf("%s", str);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase

        if (isalpha(ch)) {  // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Output the results
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
