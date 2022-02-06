// C program to add 2d array or matrices by taking input of elements form the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, sum = 0;                                      //declaring variables
    printf("Enter the number of rows and columns of matrix 1: "); //taking input of rows and columns of matrix 1
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter the elements of matrix 1: \n"); //taking input of elements of matrix 1
    for (i = 0; i < m; i++)
    { //loop for rows
        for (j = 0; j < n; j++)
        { //loop for columns
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of matrix 2: "); //taking input of rows and columns of matrix 2
    scanf("%d %d", &m, &n);
    int b[m][n];
    printf("Enter the elements of matrix 2: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    { // Loop for sum of rows
        for (j = 0; j < n; j++)
        {                                  // Loop for sum of columns
            sum = sum + a[i][j] + b[i][j]; //sum of elements of matrix 1 and matrix 2
        }
    }
    // printing sum of 2 matrices in matrix form
    printf("Sum of 2 matrices is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}