//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element for each array element
    for (int i = 0; i < n; i++) {
        int prevGreater = -1; // Default if no greater element found

        // Check elements to the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        // Print result
        printf("%d", prevGreater);

        // Add comma if not the last element
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
