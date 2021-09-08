// C program to sort an array using bubble sort
#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap; // n = number of elements, c = counter, d = temporary variable

    printf("Enter number of elements\n"); // ask user for number of elements
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++) // loop to input elements
        scanf("%d", &array[c]);

    for (c = 0; c < n - 1; c++) // loop to sort elements
    {
        for (d = 0; d < n - c - 1; d++) // loop to sort elements
        {
            if (array[d] > array[d + 1]) // if statement to swap elements
            /* For decreasing order use '<' instead of '>' */
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n"); // print sorted list

    for (c = 0; c < n; c++) // loop to print elements
        printf("%d\n", array[c]);

    return 0;
}