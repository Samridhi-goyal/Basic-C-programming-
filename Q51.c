//Q51: Write a program to print the following pattern:
/*    5
     45
    345
   2345
  12345 */

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() {
    int rows = 5;

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers from (6 - i) to 5
        for (int num = 6 - i; num <= 5; num++) {
            printf("%d", num);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
