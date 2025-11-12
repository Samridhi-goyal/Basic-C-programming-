//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    // Using mathematical formula:
    // Sum(1..x) = x*(x+1)/2
    // Sum(x..n) = n*(n+1)/2 - (x-1)*x/2
    // We need: Sum(1..x) == Sum(x..n)
    // Simplifies to: x^2 = n*(n+1)/2
    // So x = sqrt(n*(n+1)/2)

    double val = sqrt((n * (n + 1)) / 2.0);
    int x = (int)val;

    if (x * x == n * (n + 1) / 2)
        return x;
    else
        return -1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);

    return 0;
}
