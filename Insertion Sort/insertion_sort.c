#include <stdio.h>
#include <stdlib.h>

void main()
{

    int size, i, j, temp, list[100];

    printf("Enter the size of the list: ");
    scanf("%d", &size);

    printf("Enter %d integer values: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &list[i]);

    //Insertion sort logic
    for (i = 1; i < size; i++)
    {
        temp = list[i];
        j = i - 1;
        while ((temp < list[j]) && (j >= 0))
        {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = temp;
    }

    printf("List after Sorting is: ");
    for (i = 0; i < size; i++)
        printf(" %d", list[i]);
}