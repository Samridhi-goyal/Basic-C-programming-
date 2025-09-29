//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSum[rows];
    
    // Initialize row sums to 0
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    
    // Read matrix elements and calculate row sums
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    
    // Print the sum of each row
    for(int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    
    return 0;
}
