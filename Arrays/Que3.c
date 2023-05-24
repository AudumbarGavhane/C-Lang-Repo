/*3. Write a program to accept an integer array and an integer say num and counts the occurrences of the 
num in the array.*/
#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    int arr[100];

    // Read array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number to count occurrences
    printf("Enter the number to count occurrences: ");
    scanf("%d", &num);

    // Count the occurrences of num in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    // Print the count of occurrences
    printf("The number %d occurs %d times in the array.\n", num, count);

    return 0;
}
