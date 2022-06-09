#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int a[20];
    int i, n, a1, a2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nThe array is: ");
    printf("The postions to swap: ");
    scanf("%d %d", &a1, &a2);
    swap(&a[a1-1], &a[a2-1]);
    printf("\nThe array after swapping: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

}