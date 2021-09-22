

//  C Program To Implementation Of Queue Using Array

#include <stdio.h>
#include <stdlib.h>
#define MAX 10 //Defines the maximum size of the queue
void insert(); //Function to insert an element in the queue
void delete (); //Function to delete an element from the queue
void display(); //Function to display the queue
int queue[MAX]; //Array to store the queue
int rear = -1; //Index of the rear of the queue
int front = -1; //Index of the front of the queue
int main()
{
    int choice; //Variable to store the choice of the user
    while (1) //Loop to continue the program
    {
        printf("******** Choices ********\n");
        printf("\n Warning: Do Not Enter Any Other Symbols and Alphabets Except Numbers\n\n");
        printf("1. Insert element to queue \n");
        printf("2. Delete element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Quit \n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) //Switch case to perform the required operation
        {
        case 1: //Insert element to queue
            insert();
            printf("\n");
            break;
        case 2: //Delete element from queue
            delete ();
            printf("\n");
            break;
        case 3: //Display all elements of queue
            display();
            printf("\n");
            break;
        case 4: //Quit
            exit(0);
            break;
        default: //Invalid choice
            printf("Wrong choice \n");
            printf("\n");
            break;
        }
    }
    return 0;
}

// ------------------Insert Function which helps to insert elements in array queue----------------

void insert()
{
    int Value;
    if (rear == MAX - 1)
        printf("Queue is FULL!!! Insertion is not possible!!!\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &Value);
        rear = rear + 1;
        queue[rear] = Value;
    }
}



// ------------------Delete Function which helps to Delete elements From array queue----------------
void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is EMPTY!!! Deletion is not possible!!! \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}

// ------------------Display Function which helps to Display all the elements of array queue----------------
void display()
{
    int i;
    if (front == -1)
        printf("Queue is EMPTY!!! \n");
    else
    {
        printf("All Elements of Queue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}