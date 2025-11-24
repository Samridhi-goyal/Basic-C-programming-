//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][50];  // To store each word separately
    int i, j = 0, k = 0, wordCount = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';  // Remove newline if present

    // Split the name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[j][k++] = name[i];
        } else if (k > 0) { // End of a word
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    if (k > 0) { // Add last word
        words[j][k] = '\0';
        j++;
    }
    wordCount = j;

    // Print initials for all except last word
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print last word (surname) in full
    printf(" %s\n", words[wordCount - 1]);

    return 0;
}
