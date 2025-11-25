//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n+1]; // One extra space for new element

    // Read the sorted array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    // Read the element to insert
    scanf("%d", &key);

    int i = n - 1;

    // Shift elements greater than key to right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at correct position
    arr[i + 1] = key;

    // Increment size to n+1
    n++;

    // Print the updated array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
