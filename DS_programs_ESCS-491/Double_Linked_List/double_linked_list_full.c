#include <stdio.h>
#include <stdlib.h>
//double linked list
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *last=NULL;

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

void display_list(){
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

void insert_any(){
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

void delete_any(){
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

void delete_first(){
    struct node *temp;
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_last(){
    struct node *temp;
    temp = last;
    last = last->prev;
    last->next = NULL;
    free(temp);
}

void delete_list(){
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        head = head->next;
        free(temp);
        temp = head;
    }
    head = NULL;
    last = NULL;
}

void insert_first(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

void insert_last(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = last;
    last->next = temp;
    last = temp;
}

void reverse_list(){
    struct node *temp, *temp2;
    temp = head;
    temp2 = NULL;
    while (temp != NULL)
    {
        temp2 = temp->prev;
        temp->prev = temp->next;
        temp->next = temp2;
        temp = temp->prev;
    }
    head = temp2->prev;
    last = temp2;
}

void search_list(){
    struct node *temp;
    int data, i=1;
    printf("Enter the data you want to search: ");
    scanf("%d", &data);
    temp = head;
    while(temp!=NULL)
    {
        if (temp->data == data)
        {
            printf("Data found at position %d\n", i);
            break;
        }
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
    {
        printf("Data not found\n");
    }
}

void sort_list(){
    struct node *temp, *temp2;
    int i, j, data;
    temp = head;
    while (temp->next != NULL)
    {
        temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data > temp2->data)
            {
                data = temp->data;
                temp->data = temp2->data;
                temp2->data = data;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}


