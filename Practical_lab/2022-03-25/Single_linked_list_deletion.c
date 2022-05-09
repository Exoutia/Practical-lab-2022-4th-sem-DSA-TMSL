#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void create_list();
void display_list();
void delete_list();
void delete_first();
void delete_last();
void delete_any();

void main(){
    int ch;
    while(1){
    printf("Press 0 to exit.\n");
    printf("press 1 create list.\n");
    printf("Press 2 to display list.\n");
    printf("Press 3 delete first element.\n");
    printf("Press 4 delete last element.\n");
    printf("Press 5 delete any element.\n");
    printf("Press 6 to delete whole list.\n");
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
            delete_first();
            break;
        case 4:
            delete_last();
            break;
        case 5:
            delete_any();
            break;
        case 6:
            delete_list();
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

void delete_first(){
    if(head==NULL){
        printf("No data in the list");
    }
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}

void delete_last(){
    if(head==NULL){
        printf("no data in the list.");
    }
    int i;
    struct node *p, *q;
    p=head;
    while(p->next->next!=NULL){
        p=p->next;
    }
    q=p->next;
    p->next=NULL;
    free(q);
}

void delete_any(){
    int i, c, pos;
    struct node *temp, *q;
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    
    printf("Enter the positoon you want to delete: ");
    scanf("%d", &pos);

    if(pos==0){
        delete_first();
    }
    
    else if(pos<0 || pos>c+1){
        printf("invalid position.");
        return;
    }
    else{
    temp=head;
    for(i=1;i<pos-1;i++){
        temp=temp->next;
    }
    q=temp->next;
    temp->next=q->next;
    free(q);}
}

void delete_list(){
    struct node *temp=head, *next;
    while(temp!=NULL){
        next=temp->next;
        free(temp);
        temp=next;
    }    
    head=NULL;
}











