/*1. Write a program to accept, display and print the sum of elements of each row and sum of elements of 
each column of a matrix.*/
#include <stdio.h>

int main() {
    int rows, columns, i, j, matrix[100][100], rowSum, columnSum;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    // Accept the matrix from the user
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter element (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Calculate the sum of elements of each row and print it
    printf("\nRow sums:\n");
    for (i = 0; i < rows; i++) {
        rowSum = 0;
        for (j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i+1, rowSum);
    }
    
    // Calculate the sum of elements of each column and print it
    printf("\nColumn sums:\n");
    for (j = 0; j < columns; j++) {
        columnSum = 0;
        for (i = 0; i < rows; i++) {
            columnSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j+1, columnSum);
    }
    
    return 0;
}
