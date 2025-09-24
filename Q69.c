//Q69: Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];  // assuming max size is 100
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
