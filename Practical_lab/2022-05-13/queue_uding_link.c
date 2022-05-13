#include <stdlib.h>
#include <stdio.h>

//Queue using linked list
struct node{
    int data;
    struct node *next;
};
struct node *front =NULL, *rear=NULL;

void enqueue();
void dequeue();
void display();

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

 void enqueue(){
    int data;
    struct node *ptr;

    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("Enter data: ");
        scanf("%d", &data);
        ptr->data = data;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}

void dequeue(){
    struct node *temp;
    temp = front;
    front = front->next;
    printf("Deleted data: %d\n", temp->data);
    temp->next=NULL;
    free(temp);
}

void display(){
    struct node *temp;
    temp=front;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}



