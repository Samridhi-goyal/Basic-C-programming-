//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main() {
    // Loop through 5 rows
    for (int i = 0; i < 5; i++) {
        // Loop through 5 columns in each row
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
