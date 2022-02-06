// C program to subtract two matrices
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, k;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d%d", &k, &n);
    if (m != k || n != k)
    {
        printf("\nThe matrices are not of same size.\n");
        return 0;
    }
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements of matrix 1: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of matrix 2: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] - b[i][j];
    printf("The resultant matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
