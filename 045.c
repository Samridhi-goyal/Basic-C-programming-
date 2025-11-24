//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Read input
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    // Print result rounded to 2 decimal places
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
