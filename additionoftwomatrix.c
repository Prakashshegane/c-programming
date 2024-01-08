#include <stdio.h>

void addMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int rows, columns, i, j;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Adding two matrices
    addMatrices(firstMatrix, secondMatrix, result, rows, columns);

    // Displaying the matrices
    printf("\nFirst matrix:\n");
    displayMatrix(firstMatrix, rows, columns);

    printf("\nSecond matrix:\n");
    displayMatrix(secondMatrix, rows, columns);

    printf("\nSum of the matrices:\n");
    displayMatrix(result, rows, columns);

    return 0;
}