#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create_list();
void display_list();
void insert_at_first();
void insert_at_last();
void insert_at_any();


void main(){
    int ch;
    while(1){
    printf("Press 0 to exit.\n");
    printf("press 1 create list.\n");
    printf("Press 2 to display list.\n");
    printf("Press 3 to insert at first.\n");
    printf("Press 4 to insert at last.\n");
    printf("Press 5 to insert at any position.\n");

    scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create_list();
            break;
        case 2:
            display_list();
            break;
        case 3:
            insert_at_first();
            break;
        case 4:
            insert_at_last();
            break;
        case 5:
            insert_at_any();
            break;
        
        case 0:
            exit(0);

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

void insert_at_first(){
    int data;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation not possible.");
    }
    else{
        printf("Enter data for inserting at first: ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=head;
        head=newnode;
    }
}

void insert_at_last(){
    int data;
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory Allocation Not possible.");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        printf("Enter data at end of linked list: ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
    }
}

void insert_at_any(){
    int i, pos, c=0, data;
    struct node *newnode, *temp;
    printf("Enter the postion to enter the data: ");
    scanf("%d", &pos);
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    if(pos<1 || pos>c+1){
        printf("invalid position.");
    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("memory allocation is nt possible.");
        }
        else{
            printf("Enter the data at %d: ", pos);
            scanf("%d", &data);
            newnode->data=data;
            newnode->next=NULL;
            temp=head;
            for(i=1;i<pos-1;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }

    }
}


