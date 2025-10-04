//Q85: Reverse a string.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    char temp;

    // Read input string
    scanf("%s", str);

    // Get string length
    len = strlen(str);

    // Reverse the string in-place
    for (i = 0; i < len / 2; i++) {
        // Swap characters
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Print the reversed string
    printf("%s\n", str);

    return 0;
}
