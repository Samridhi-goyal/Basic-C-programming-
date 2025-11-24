//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // Check length first
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    // Count characters in s
    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Subtract characters in t
    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
