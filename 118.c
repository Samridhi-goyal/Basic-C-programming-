//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;

    // Input size of array (should be n elements, where one number from 0..n is missing)
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    // Sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    int missing = total - sum;
    printf("Missing number: %d\n", missing);

    return 0;
}
