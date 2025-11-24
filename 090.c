//Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];

    // Read the input string (without spaces)
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // If uppercase (A-Z), convert to lowercase (a-z)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Add 32
        }
        // Else if lowercase (a-z), convert to uppercase (A-Z)
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Subtract 32
        }
    }

    // Print toggled string
    printf("%s\n", str);

    return 0;
}
