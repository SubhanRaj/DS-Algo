// Traversal in Array
#include <stdio.h>

int main()
{
    /* Creating an Array and taking input */
    //Taking input of number of elements in array
    int size;
    printf("\nEnter number of Elements in Array: ");
    scanf("%d", &size);
    int array[size];
    printf("\nEnter %d Elements in Array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("\n%d", &array[i]);
    }
    // printing the array
    for (int i = 0; i < size; i++)
    {
        printf("\n%d", array[i]);
    }

    return 0;
}


























