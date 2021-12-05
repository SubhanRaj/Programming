// C program to implement queue data structure using array
#include <stdio.h>
#include <stdlib.h>

#define MAX 10             // Maximum number of elements in queue
int queue[MAX];            // Array to store queue elements
int front = -1, rear = -1; // Front and rear variables
void insert(void);         // Function to insert an element in queue
int delete_element(void);  // Function to delete an element from queue
int peek(void);            // Function to return the front element of queue
void display(void);        // Function to display the queue

int main()
{
    int option, val;
    do
    {
        printf("\n\n ***** MAIN MENU ***** ");
        printf("\n 1. Insert an element in the queue");
        printf("\n 2. Delete an element form the queue");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            val = delete_element();
            if (val != -1)
                printf("\n The number deleted is %d", val);
            break;
        case 3:
            val = peek();
            if (val != -1)
                printf("\n The first value in the queue is %d", val);
            break;
        case 4:
            display();
            break;
        }

    } while (option != 5);
    return 0;
}
// Defining functions
// Function to insert an element in the queue

void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue: ");
    scanf("%d", &num);
    if (rear = MAX - 1)
    {
        printf("\n Queue is full");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = num;
}
// Function to delete an element from the queue

int delete_element()
{
    int val;
    if (front == -1 || front > rear)
    {
        printf("\n Underflow");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;
        if (front > rear)
            front = rear = -1;
        return val;
    }
}

//Function to peek the element

int peek()
{
    if (front == -1 || front > rear)
    {
        printf("]n Queue id empty")
    }
}