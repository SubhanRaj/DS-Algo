/*
  C program to input N numbers and store them in an array.
  Do a linear search for a given key and report success or failure.
 */
//  By: Priyanshu, Sahil Ali & Subhan Raj
#include <stdio.h>

int main()
{
    int num;

    int i, keynum, found = 0;

    printf("\nEnter the number of elements ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the element to be searched ");
    scanf("%d", &keynum);
    /*  Linear search begins */
    for (i = 0; i < num; i++)
    {
        if (keynum == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {

        printf("\nElement is present in the array at index %d and\n", i);
        printf("\nThe position of element in Array is %d\n", i + 1);
    }
    else
        printf("\nElement is not present in the array\n");

    return 0;
}
