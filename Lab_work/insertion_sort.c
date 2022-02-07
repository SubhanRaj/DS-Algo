// Write a C program to implement Insertion Sort on an array of integres which takes input from the user.

/*
    In insertion sort, we insert an element into a sorted array.
    The element is inserted into the correct position in the array.
    We start from the second element and compare it with the first element.
    If the first element is greater than the second element, we swap them.
    We continue the process and compare the second element with the third element and so on.
    keep repeating the process until we reach the last element.
*/
/* C Program to sort an array in ascending order using Insertion Sort */
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[64];

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
