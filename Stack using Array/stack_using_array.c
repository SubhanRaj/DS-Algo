// Implementation of stack data structure using array 

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 // Defaine the size of the stack

void push(int); // Function to push the element in the stack
void pop(); // Function to pop the element from the stack
void display(); // Function to display the stack

int stack[SIZE], top = -1; // Declare the stack and top

void main()
{
    int value, choice;
    while (1) 
    {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // Push the element in the stack
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2: // Pop the element from the stack
            pop();
            break;
        case 3: // Display the stack
            display();
            break;
        case 4: // Exit the program
            exit(0);
        default:
            printf("\nWrong selection!!! Try again!!!");
        }
    }
}
void push(int value) 
{
    if (top == SIZE - 1)
        printf("\nStack is Full!!! Insertion is not possible!!!");
    else
    {
        top++;
        stack[top] = value;
        printf("\nInsertion success!!!");
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is Empty!!! Deletion is not possible!!!");
    else
    {
        printf("\nDeleted : %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
        printf("\nStack is Empty!!!");
    else
    {
        int i;
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}