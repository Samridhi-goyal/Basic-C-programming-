//Q76: Check if a matrix is symmetric.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Symmetric matrix must be square
    if (n != m) {
        printf("False\n");
        return 0;
    }

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool symmetric = true;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
