#include <stdlib.h>
#include <stdio.h>

//Queue using array

#define max 11
int queue[max];
void enqueue();
void dequeue();
void display();
int front = -1, rear = -1;
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3: 
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;

        }
    }
}

void enqueue()
{   
    int data;
    printf("enter data: ");
    scanf("%d", &data);
    if(rear == max-1)
    {
        printf("Queue is full\n");
        return;
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = data;

}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("Deleted element is: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        int i;
        for(i=front; i<=rear; i++)
        {
            printf("%d  ", queue[i]);
        }
    }
}
