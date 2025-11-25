//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];

    // Read the input string
    scanf("%s", str);

    // Convert each character to uppercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // or subtract 32
        }
    }

    // Print the converted string
    printf("%s\n", str);

    return 0;
}
