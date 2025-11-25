//Q89: Count frequency of a given character in a string.


#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Read the string
    scanf("%s", str);

    // Read the character to count
    scanf(" %c", &ch);  // Note the space before %c to skip any leftover newline

    // Count the frequency of ch in str
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print the result
    printf("%d\n", count);

    return 0;
}
