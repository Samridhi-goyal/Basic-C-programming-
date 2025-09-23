//Q50: Write a program to print the following pattern:
/* *****
    ****
     ***
      **
       *  */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int rows = 5;

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 0; star < rows - i; star++) {
            printf("*");
        }
        // Move to next line
        printf("\n");
    }

    return 0;
}
