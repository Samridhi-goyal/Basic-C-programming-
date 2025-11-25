//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input upper limit

    for (int i = 2; i <= n; i++) {  // Loop from 2 to n
        int isPrime = 1;  // Assume i is prime

        for (int j = 2; j * j <= i; j++) {  // Check divisibility
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);  // Print prime number
        }
    }

    printf("\n");
    return 0;
}
