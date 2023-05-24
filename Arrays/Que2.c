/*2. Write a program to accept an array of n elements and a number say key. Check whether key is present 
in the array or not*/
#include <stdio.h>

int main() {
    int n, i, key, flag = 0;
    int arr[100];

    // Read array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key element to search
    printf("Enter the key element to search: ");
    scanf("%d", &key);

    // Search for key element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }

    // Print the search result
    if (flag == 1) {
        printf("The key element %d is present in the array.\n", key);
    } else {
        printf("The key element %d is not present in the array.\n", key);
    }

    return 0;
}
