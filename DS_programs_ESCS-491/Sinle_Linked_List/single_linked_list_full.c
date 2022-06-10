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
void insert_first();
void insert_last();
void insert_any();
void search_list();
void reverse_list();
void sort_list();

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
    printf("Press 7 to insert first element.\n");
    printf("Press 8 to insert last element.\n");
    printf("Press 9 to insert any element.\n");
    printf("Press 10 to search element.\n");
    printf("Press 11 to reverse list.\n");
    printf("Press 12 to sort list.\n");
    printf("Enter your choice: ");
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
        case 7:
            insert_first();
            break;
        case 8:
            insert_last();
            break;
        case 9:
            insert_any();
            break;
        case 10:
            search_list();
            break;
        case 11:    
            reverse_list();
            break;
        case 12:
            sort_list();
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

void insert_first(){
    int data;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("Memory Allocation Not Possible.");
    }
    else{
        printf("Enter data: ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=head;
        head=newnode;
    }
}

void insert_last(){
    int data;
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("Memory Allocation Not Possible.");
    }
    else{
        printf("Enter data: ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
    }

}

void insert_any(){
    int data, i, c, pos;
    struct node *newnode, *temp, *q;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("Memory Allocation Not Possible.");
    }
    else{
        printf("Enter data: ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=NULL;
        temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        printf("Enter the positoon you want to insert: ");
        scanf("%d", &pos);
        if(pos==0){
            insert_first();
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
        temp->next=newnode;
        newnode->next=q;
        }
    }   
}

void reverse_list(){
    struct node *p, *q, *r;
    p=head;
    q=head->next;
    r=q->next;
    p->next=NULL;
    while(r!=NULL){
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next=p;
    head=q;
}

void sort_list(){
    struct node *p, *q, *r;
    p=head;
    q=p->next;
    while(q!=NULL){
        r=q->next;
        while(p!=NULL){
            if(p->data>q->data){
                int temp;
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            p=p->next;
        }
        p=head;
        q=r;
    }
}

void search_list(){
    int c=0, data, pos=-1;
    struct node *temp;
    temp=head;
    printf("Enter the data you want to search: ");
    scanf("%d", &data);
    while(temp!=NULL){
        if(temp->data==data){
            pos=c;
            break;
        }
        temp=temp->next;
        c++;
    }
    if(pos==-1){
        printf("Data not found.");
    }
    else{
        printf("Data found at position %d", pos+1);
    }
}