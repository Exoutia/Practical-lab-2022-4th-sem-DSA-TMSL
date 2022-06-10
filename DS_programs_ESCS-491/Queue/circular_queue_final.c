
#include <stdlib.h>
#include <stdio.h>

//Queue using array

#define max 6
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


// function to insert an element in a circular queue
void enqueue(){
    int item;
    if((rear == max-1 && front == 0) || (rear == front-1)){
        printf("Queue is full\n");
        return;
    }
    if (front == -1){
        front = 0;
        rear = 0;
    }
    else if (rear == max-1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    queue[rear] = item;
}

void dequeue(){
    int a = queue[front];
    if(front == -1 && rear==-1){
        printf("Queue is empty\n");
        return;
    }
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(front == max-1){
        front = 0;
    }
    else{
        front++;
    }
    printf("Deleted element is: %d", a);
}

void display(){
    int i;
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    if(front <= rear){
        for(i=front; i<=rear; i++){
            printf("%d ", queue[i]);
        }
    }
    else{
        for(i=front; i<max; i++){
            printf("%d ", queue[i]);
        }
        for(i=0; i<=rear; i++){
            printf("%d ", queue[i]);
        }
    }
}
