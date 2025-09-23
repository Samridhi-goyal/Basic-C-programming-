//Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    // Loop through 5 rows
    for (int i = 1; i <= 5; i++) {
        // Print i stars in the i-th row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
