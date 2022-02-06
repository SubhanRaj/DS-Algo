// C program to multiply 2d array or matrices by taking input of elements form the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n *** C program for Multiplication of 2D arrays or matrices*** \n\n");
    int i, j, k, m, n, p, q;                                          // i,j,k,m,n,p,q are used for looping
    printf("Enter the number of rows and columns of first matrix: "); // taking input of rows and columns of first matrix
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: "); // taking input of rows and columns of second matrix
    scanf("%d %d", &p, &q);
    if (n != p) // checking if the number of columns of first matrix is equal to the number of rows of second matrix
    {
        printf("\nThe multiplication of matrices is not possible.\n"); // printing error message
        printf("\nThe number of columns of first matrix must be equal to the number of rows of second matrix.\n");
        return 0;
    }
    else // if the number of columns of first matrix is equal to the number of rows of second matrix
    {
        int a[m][n], b[p][q], c[m][q];                    // declaring 2d arrays a,b,c
        printf("Enter the elements of first matrix: \n"); // taking input of elements of first matrix
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n"); // taking input of elements of second matrix
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0; // initializing elements of c to 0
                for (k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j]; // calculating elements of c
                }
            }
        }
        printf("The product of the two matrices is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ", c[i][j]); // printing elements of c
            }
            printf("\n");
        }
    }

    return 0;
}