//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal length = min(rows, cols)
    int diagLen = rows < cols ? rows : cols;

    bool distinct = true;

    // Check distinctness of diagonal elements
    for (int i = 0; i < diagLen; i++) {
        for (int j = i + 1; j < diagLen; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
