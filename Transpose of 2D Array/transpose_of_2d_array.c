// C Program to transpose a 2D array
#include <stdio.h>

int main()
{
    int m, n, i, j, matrix[10][10], transpose[10][10]; // m = number of rows, n = number of columns, i, j = loop counters and matrix and transpose are 2D arrays
    printf("Enter rows and columns :\n");              // Prompts user to enter rows and columns
    scanf("%d%d", &m, &n);                             // Stores the number of rows and columns in m and n respectively
    printf("Enter elements of the matrix\n");
    for (i = 0; i < m; i++)             // Loops through the rows
        for (j = 0; j < n; j++)         // Loops through the columns
            scanf("%d", &matrix[i][j]); // Stores the elements of the matrix in matrix
    // Transpose of the matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j]; // Stores the transpose of the matrix in transpose
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t", transpose[i][j]); // Prints the transpose of the matrix
        printf("\n");
    }
    return 0;
}