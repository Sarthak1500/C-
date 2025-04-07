#include <stdio.h>

// Function to calculate sum of an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate and display sum
    printf("Sum of array: %d\n", sumArray(arr, size));

    return 0;
}
