//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];

    // Read input string
    scanf("%s", str);

    // Iterate through the string and print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
