#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;


void push();
void pop();
void display();
void peak();


void main(){
    int ch=0;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peak\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peak();
            break;
        case 5:
            exit(0);
            break;
        
        default:
            break;
        }
    }
    
}

void push(){
    int data;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack Overflow");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}

void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow");
        return;
    }
    printf("Popped element is: %d\n", top->data);
    temp=top;
    top=top->next;
    free(temp);
}

void display(){
    struct node *temp;
    if(top==NULL){
        printf("Stack is empty");
        return;
    }
    temp=top;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

void peak(){
    if(top==NULL){
        printf("Stack is empty");
        return;
    }
    printf("Peak element is: %d\n", top->data);
}





