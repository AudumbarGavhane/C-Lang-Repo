/*1. Write a program to accept n numbers in an array and display the largest and smallest number. Using 
these values, calculate the range of elements in the array.*/

#include <stdio.h>

int main() {
    int n, i, max, min;
    int arr[100];

    // Read array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum elements
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display maximum and minimum elements
    printf("Largest element in the array: %d\n", max);
    printf("Smallest element in the array: %d\n", min);

    // Calculate and display range
    printf("Range of elements in the array: %d\n", max - min);

    return 0;
}
