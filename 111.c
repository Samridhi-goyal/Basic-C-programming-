//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    int negIndices[n];  // To store indices of negative numbers
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        // Remove elements that are out of this window
        while (front < rear && negIndices[front] <= i - k)
            front++;

        // Add current element if it's negative
        if (arr[i] < 0)
            negIndices[rear++] = i;

        // Start printing results once we have the first full window
        if (i >= k - 1) {
            if (front < rear)
                printf("%d ", arr[negIndices[front]]);
            else
                printf("0 ");
        }
    }
}

int main() {
    int arr[100], n, k;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input window size
    printf("Enter window size k: ");
    scanf("%d", &k);

    // Output result
    firstNegativeInWindow(arr, n, k);

    return 0;
}
