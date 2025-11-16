//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // XOR method
    int xor_all = 0;
    for (int i = 0; i < n; i++) {
        xor_all ^= nums[i];   // XOR all elements in array
        xor_all ^= i;         // XOR index values
    }

    printf("Repeated element: %d\n", xor_all);
    return 0;
}
