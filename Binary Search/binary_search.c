#include <stdio.h>
#include <stdlib.h>

void main()
{
    int first, last, middle, size, i, sElement, list[100]; // Declare variables

    printf("Enter the size of the list: ");
    scanf("%d", &size);

    printf("Enter %d integer values in Assending order\n", size);

    for (i = 0; i < size; i++) // Input the values
        scanf("%d", &list[i]);

    printf("Enter value to be search: "); // Input the value to be search
    scanf("%d", &sElement);

    first = 0; // Initialize first and last
    last = size - 1;
    middle = (first + last) / 2; // Initialize middle

    while (first <= last)
    {
        if (list[middle] < sElement) // If middle element is less than search element
            first = middle + 1;
        else if (list[middle] == sElement)
        {
            printf("Element found at index %d.\n", middle);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Element Not found in the list.");
}