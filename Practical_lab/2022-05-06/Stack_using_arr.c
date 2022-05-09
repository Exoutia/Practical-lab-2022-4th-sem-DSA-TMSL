#include <stdio.h>
#include <stdlib.h>

int stack[100], i, top=-1;
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
    if(top==100){
        printf("Stack Overflow");
        return;
    }
    else
    {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        top++;
        stack[top]=data;
    }
    
}

void pop(){
    if(top==-1){
        printf("Stack Underflow");
        return;
    }
    else{
        printf("Poped element is %d\n", stack[top]);
        top--;
       
    }
}

void display(){
    if(top==-1){
        printf("Stack Underflow.");
        return;
    }
    else{
        for (i=top; i>=0; i--)
        {
            printf("%d->", stack[i]);
        }
    }
}

void peak(){
    printf("Peak of stack: %d", stack[top]);
}