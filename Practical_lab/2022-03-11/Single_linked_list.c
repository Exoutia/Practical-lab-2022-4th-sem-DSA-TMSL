#include<stdio.h>
#include<stdlib.h>
//creating struct and head node.
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

//creating the linked_list.
void create_linked_list(){
    int i=1, data, n;
    printf("Enter the length of linkedlist: ");
    scanf("%d", &n);
    struct node *temp, *newnode;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Memory alloctaion not possible.");
    }
    else{
        printf("Enter the data: ");
        scanf("%d", &data);
        head->data=data;
        head->next=NULL;
        temp = head;
    }
    for(i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (newnode==NULL)
        {
            printf("memory allocation not possible.");
        }
        else{
            printf("enter the data: ");
            scanf("%d", &data);
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp = newnode;
        }
        
    }
}

//display function for linked list.
void display_list(){
    struct node *temp;
    temp = head;
    if (head == NULL){
        printf("No data in the list.");
    }
    else{
        while (temp!=NULL){
            printf("%d  ", temp->data);
            temp=temp -> next;
        }
        
    }

}

int main()
{
    create_linked_list();
    display_list();
    return 0;
}


