//Q65: Search in a sorted array using binary Search

#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read sorted array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    // Read the element to search for
    scanf("%d", &key);

    int left = 0, right = n - 1;
    int index = -1;

    // Binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Print the result
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
