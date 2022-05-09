#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void createlist();
void display();
void search();

void main(){
    createlist();
    display();
    search();
}

void createlist(){
    int data, size, i=1;
    struct node *temp, *newnode;
    printf("Enter size of linked list: ");
    scanf("%d",&size);
    head = (struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("memory allocation not available");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=size;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("Memory allocation not possible.");
            return;
        }
        printf("Enter data: ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=head;
        temp->next=newnode;
        temp=newnode;
    }

}

void display(){
    struct node *temp;
    printf("%d->", head->data);
    temp=head->next;
    while(temp!=head){
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("head");
}

void search(){
    printf("\n");
    int query, pos=1;
    struct node *temp;
    printf("Enter the number to find in the list: ");
    scanf("%d", &query);
    temp=head;
    do
    {
        if(temp->data==query){
            printf("%d is at position: %d", query, pos);
            return;
        }
         temp=temp->next;
         pos++;
    } while (temp!=head);
    printf("%d not found in the list:\n", query);
    display();
}


