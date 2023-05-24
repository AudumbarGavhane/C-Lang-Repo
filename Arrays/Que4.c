/*4. Write a program to accept n numbers from the user and store them in an array. Then sort the array in 
descending order and display it.*/
#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];

    // Read array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the sorted array in descending order
    printf("The array sorted in descending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
