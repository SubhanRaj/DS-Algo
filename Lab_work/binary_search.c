// Write a C program to implement Binary Search on an array of integres which takes input from the user.

#include <stdio.h>
#include <stdlib.h>

/* In binary search, we divide the array into two parts.
The first part contains all the elements which are smaller than the element to be searched.
The second part contains all the elements which are greater than the element to be searched.
We keep dividing the array into two parts until we find the element to be searched.
If the element to be searched is not found, then we return -1. */

//  Function to perform binary search

int binarySearch(int arr[], int l, int r, int x)
{
    // Base
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;
        // If
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

// Driver program to test above function
int main()
{
    int arr[100], n, x, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    x = sizeof(arr) / sizeof(arr[0]);
    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);
    result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d\n", result);
    return 0;
}