//Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int rows = 7;
    int mid = (rows + 1) / 2; // middle row number

    // Upper part including middle row
    for (int i = 1; i <= mid; i++) {
        // Print leading spaces
        for (int space = 1; space <= mid - i; space++) {
            printf(" ");
        }
        // Print stars: 2*i -1 stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for (int i = mid - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= mid - i; space++) {
            printf(" ");
        }
        // Print stars: 2*i - 1 stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
