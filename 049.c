//Q49: Write a program to print the following pattern:
/*5
45
345
2345
12345*/

#include <stdio.h>

int main() {
    // Loop through rows 1 to 5
    for (int i = 1; i <= 5; i++) {
        // Print numbers from (6 - i) to 5
        for (int j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
