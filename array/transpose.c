#include <stdio.h>

#define SIZE 2  // Matrix size

// Function to compute transpose of a matrix
void transposeMatrix() {
    int matrix[SIZE][SIZE], transposed[SIZE][SIZE];

    // Input matrix
    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &matrix[i][j]);

    // Compute transpose
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            transposed[j][i] = matrix[i][j];

    // Display transposed matrix
    printf("Transpose of matrix:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d %d\n", transposed[i][0], transposed[i][1]);
}

int main() {
    transposeMatrix();
    return 0;
}
