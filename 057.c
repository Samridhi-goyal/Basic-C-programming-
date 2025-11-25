//Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    int sum = 0;

    // Read the elements and calculate the sum
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}

