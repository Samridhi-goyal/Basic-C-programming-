//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Read input
    scanf("%d", &n);

    // Calculate the series sum
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    // Print result rounded to 1 decimal place
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}

