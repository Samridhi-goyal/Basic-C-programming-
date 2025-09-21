//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num, place;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    // Find the highest power of 2 less than or equal to num
    place = 1;
    while (place <= num) {
        place = place * 2;
    }
    place = place / 2;  // Step back to the correct highest power
    // Extract and print bits
    while (place > 0) {
        int bit = num / place;
        printf("%d", bit);
        num = num - bit * place;
        place = place / 2;
    }
    printf("\n");

    return 0;
}
