Q70: Rotate an array to the right by k positions.


#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[100]; // assuming max size
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n; // to handle k > n

    int rotated[100];

    // Copy last k elements to the beginning
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the rest
    for (int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
