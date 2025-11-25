//Q48: Write a program to print the following pattern:
/*1
12
123
1234
12345*/

#include <stdio.h>

int main() {
    // Loop through 5 rows
    for (int i = 1; i <= 5; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

