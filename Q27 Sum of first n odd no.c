//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0,i;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum =sum+ 2*i + 1; 
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
} 
