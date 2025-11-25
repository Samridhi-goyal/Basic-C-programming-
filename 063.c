//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2;

    // Read size of first array
    scanf("%d", &n1);
    int arr1[n1];

    // Read elements of first array
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read size of second array
    scanf("%d", &n2);
    int arr2[n2];

    // Read elements of second array
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    // Copy elements from arr1
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
