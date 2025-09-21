//Q40: Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>

int main() 
{
    int num, com = 0;
    int p = 1, r, t, digits = 0;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    t = num; // Copy input to temporary variable for digit count
    // Count number of digits
    while (t > 0) {
        digits++;
        t = t / 10;
    }
    t = num; // Reset t to the original number for processing
    // Compute 1's complement
    while (t > 0) {
        r = t % 10;
        // Check for invalid digit
        if (r != 0 && r != 1) {
            printf("Invalid binary digit found: %d\n", r);
            return 1;
        }
        if (r == 0) {
            com = com + (1 * p);
        }
        // No need for else because adding 0 * p does nothing
        t = t / 10;
        p = p * 10;
    }
    // Print with leading zeros if any
    printf("1's complement is: %0*d\n", digits, com);

    return 0;
}
