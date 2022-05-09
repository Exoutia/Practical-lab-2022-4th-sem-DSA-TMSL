#include <stdio.h>
#include <stdlib.h>
//double linked list
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head = NULL, *last=NULL;

void createList();
void displayList();
void delete_at_any();
void insert_at_any();


void main(){
    createList();
    displayList();
    insert_at_any();
    displayList();
    delete_at_any();
    displayList();
}

void createList(){
    struct node *temp;
    int n, i;
    printf("Enter the number of elements you want to enter in the list: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        temp->prev = NULL;
        if (head == NULL)
        {
            head = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            temp->prev = last;
            last = temp;
        }
    }
}


void displayList(){
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
void insert_at_any(){
    struct node *temp, *newNode;
    int pos, i;
    printf("Enter the position where you want to insert the data: ");
    scanf("%d", &pos);
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    temp = head;
    if (pos == 1)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void delete_at_any(){
    struct node *temp, *delNode;
    int pos, i;
    printf("Enter the position where you want to delete the data: ");
    scanf("%d", &pos);
    temp = head;
    if (pos == 1)
    {
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        delNode = temp->next;
        temp->next = delNode->next;
        delNode->next->prev = temp;
        free(delNode);
    }
}

