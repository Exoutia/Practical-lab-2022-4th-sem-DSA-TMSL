#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create_list();
void display_list();


void main(){
    int ch;
    while(1){
    printf("Press 0 to exit.\n");
    printf("press 1 create list.\n");
    printf("Press 2 to display list.\n");

    scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create_list();
            break;
        case 2:
            display_list();
            break;
        case 0:
            exit(0);
            break;

        default:
            break;
        }
    }
}

void create_list(){
    int data, i=1, n;
    printf("Enter the length of list: ");
    scanf("%d", &n);
    struct node *temp, *newnode;
    head = (struct node*)malloc(sizeof(struct node));
    if (head==NULL){
        printf("Memory Allocation is Not Possible.");
    }
    else
    {
        printf("Enter data: ");
        scanf("%d", &data);
        head->data=data;
        head->next=NULL;
        temp=head;
    }
    for ( i = 2; i <=n; i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (newnode==NULL)
        {
            printf("Memory Allocation Not possible.");
        }
        else
        {
            printf("Enetr data: ");
            scanf("%d", &data);
            newnode->data=data;
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display_list(){
    struct node *temp;
    temp=head;
    if (temp==NULL){
        printf("Empty list");
    }
    else{
    while (temp!=NULL){
            printf("%d ", temp->data);
            temp=temp->next;
        }
    
    }
    printf("\n");
}
