//Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int result[rows1][cols2];

    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

