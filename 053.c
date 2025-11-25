//Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
* */

#include <stdio.h>

int main() {
    int rows = 9;
    int mid = (rows + 1) / 2;

    // Upper part including the middle row
    for (int i = 1; i <= mid; i++) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part after the middle row
    for (int i = mid - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
