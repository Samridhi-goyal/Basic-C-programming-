//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int len, i;
    char *wordStart = NULL;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    len = strlen(sentence);
    if (sentence[len - 1] == '\n')  // Remove newline if present
        sentence[len - 1] = '\0';

    for (i = 0; i <= len; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            if (wordStart == NULL)
                wordStart = &sentence[i];
        } else {
            if (wordStart != NULL) {
                reverse(wordStart, &sentence[i - 1]);
                wordStart = NULL;
            }
        }
    }

    printf("%s\n", sentence);
    return 0;
}
