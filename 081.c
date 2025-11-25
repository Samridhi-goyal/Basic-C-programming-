//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Read input string (including spaces if any)
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
