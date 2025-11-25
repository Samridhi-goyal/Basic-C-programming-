//Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n;

    // Read number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    // Read the element to search for
    scanf("%d", &key);

    int index = -1;

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    // Output result
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
