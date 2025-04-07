#include <stdio.h>

// // Function to swap two numbers
// void swapNumbers(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main() {
    int a, b;

    // // Input two numbers
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // printf("Before swap: a = %d, b = %d\n", a, b);

    // // Call function to swap
    // swapNumbers(&a, &b);

    // printf("After swap: a = %d, b = %d\n", a, b);
    getline(cin , a );
    getline(cin , b );
    int c = a+b;
    cout<<"Sum of a and b is: " << c;
    return 0;
}
