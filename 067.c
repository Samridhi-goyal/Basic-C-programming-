//Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[100];  // assuming max size is 100
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    // Shift elements to the right from the end to position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = val;
    n++;  // Increase the size

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
