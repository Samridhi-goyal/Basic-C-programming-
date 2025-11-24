//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        // Either start a new subarray at arr[i], or extend the current one
        if (curr_max + arr[i] > arr[i])
            curr_max = curr_max + arr[i];
        else
            curr_max = arr[i];

        // Update the overall maximum
        if (curr_max > max_so_far)
            max_so_far = curr_max;
    }

    printf("%d\n", max_so_far);

    return 0;
}

