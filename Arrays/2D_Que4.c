/*4. Write a program to perform the following operations on a square matrix. Write 
i) Check if the matrix is symmetric.
ii) Display the trace of the matrix (sum of diagonal elements). 
iii) Check if the matrix is an upper triangular matrix.*/

#include <stdio.h>

int main() {
   int n, i, j;
   int symmetric = 1, upper_triangular = 1, trace = 0;

   // Accepting size of square matrix
   printf("Enter the size of square matrix: ");
   scanf("%d", &n);

   int A[n][n];

   // Accepting elements of square matrix
   printf("Enter the elements of the square matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &A[i][j]);
      }
   }

   // Checking if the matrix is symmetric
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (A[i][j] != A[j][i]) {
            symmetric = 0;
            break;
         }
      }
   }

   if (symmetric) {
      printf("The matrix is symmetric.\n");
   } else {
      printf("The matrix is not symmetric.\n");
   }

   // Displaying the trace of the matrix
   for (i = 0; i < n; i++) {
      trace += A[i][i];
   }
   printf("The trace of the matrix is: %d\n", trace);

   // Checking if the matrix is upper triangular
   for (i = 1; i < n; i++) {
      for (j = 0; j < i; j++) {
         if (A[i][j] != 0) {
            upper_triangular = 0;
            break;
         }
      }
   }

   if (upper_triangular) {
      printf("The matrix is an upper triangular matrix.\n");
   } else {
      printf("The matrix is not an upper triangular matrix.\n");
   }

   return 0;
}
