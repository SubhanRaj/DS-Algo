#include <stdio.h>
#include <stdlib.h>

struct Node // Node for linked list
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int); // Push function
void pop();     // Pop function
void display(); // Display function

void main()
{
    int choice, value; // choice for menu, value for push
    printf("\n:: Stack using Linked List ::\n");
    while (1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // Push
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2: // Pop
            pop();
            break;
        case 3: // Display
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}
void push(int value)
{
    struct Node *newNode;                                 // New node for linked list
    newNode = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for new node
    newNode->data = value;                                // Assign value to new node
    if (top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top;
    top = newNode;
    printf("\nInsertion is Success!!!\n");
}
void pop()
{
    if (top == NULL)
        printf("\nStack is Empty!!!\n");
    else
    {
        struct Node *temp = top;
        printf("\nDeleted element: %d", temp->data);
        top = temp->next;
        free(temp);
    }
}
void display()
{
    if (top == NULL)
        printf("\nStack is Empty!!!\n");
    else
    {
        struct Node *temp = top;
        while (temp->next != NULL)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL", temp->data);
    }
}