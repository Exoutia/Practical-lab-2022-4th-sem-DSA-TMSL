#include <stdio.h>
#include <stdlib.h>
struct node{
    
    int data;
    struct node *next;
};

struct node *head = NULL;

void createList();
void displayList();
void insert_at_first();
void insert_at_last();
void insert_at_any();


int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    createList(n);
    displayList();
    printf("\n");
    insert_at_any();
    displayList();
    printf("\n");
    insert_at_first();
    displayList();
    printf("\n");
    insert_at_last();
    displayList();
    return 0;
}

void createList(int n){

    int i=1, data;
    struct node *newNode, *temp;
    head = (struct node*) malloc(sizeof(struct node));
    if(head==NULL){
        printf("Memory Alloctaion is Not Possible");
    }
    else{
        printf("enter data: ");
        scanf("%d", &data);
        head -> data = data;
        head -> next = NULL;
        temp =head;
    }
    for(i=2;i<=n;i++){
        newNode = (struct node*) malloc(sizeof(struct node));
        if(newNode==NULL){
            printf("Memory Alloctaion is Not Possible");
        }
        else{
            printf("enter data: ");
            scanf("%d", &data);
            newNode -> data = data;
            newNode -> next = NULL;
            temp -> next = newNode;
            temp = newNode;
        }
    }
}

void displayList(){
    struct node *temp;
    temp = head;
    if(head == NULL){
        printf("no data in the list");
    }
    else{
        while(temp != NULL){
            printf("%d   ", temp-> data);
            temp = temp -> next;
        }
    }
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





