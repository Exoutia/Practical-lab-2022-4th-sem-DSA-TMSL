#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void main(){
    int a[20], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe array before sorting: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    bubble_sort(a, size);
    printf("\nThe array after sorting: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
}