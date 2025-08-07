#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
