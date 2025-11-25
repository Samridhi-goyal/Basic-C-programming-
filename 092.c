//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // To store frequency of each lowercase letter
    int i;
    char result = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  // Map character to index 0–25

        if (freq[index] == 1) {
            result = str[i];  // Found the first repeating character
            break;
        }

        freq[index]++;
    }

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
