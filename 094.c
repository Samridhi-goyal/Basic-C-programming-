//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read full line (including spaces)

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n')  // Remove newline if present
        sentence[len - 1] = '\0';

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';  // End current word
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;  // Reset for next word
            if (sentence[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s\n", longest);
    return 0;
}
