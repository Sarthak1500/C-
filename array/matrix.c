#include <stdio.h>

#define SIZE 2  // Defining matrix size as 2x2

// Function to perform matrix addition and multiplication
void matrixOperations() {
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE], product[SIZE][SIZE] = {0};

    // Input first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &b[i][j]);

    // Matrix addition and multiplication
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum[i][j] = a[i][j] + b[i][j];  // Addition
            for (int k = 0; k < SIZE; k++)
                product[i][j] += a[i][k] * b[k][j];  // Multiplication
        }
    }

    // Display sum of matrices
    printf("Sum of matrices:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d %d\n", sum[i][0], sum[i][1]);

    // Display product of matrices
    printf("Product of matrices:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d %d\n", product[i][0], product[i][1]);
}

int main() {
    matrixOperations();
    return 0;
}
