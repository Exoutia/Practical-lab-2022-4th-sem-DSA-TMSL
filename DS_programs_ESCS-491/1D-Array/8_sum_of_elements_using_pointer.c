#include <stdio.h>

void main()
{
    int arr[20];
    int *ptr;
    int i;
    int size, data;
    int sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data);
        arr[i] = data;
    }
    ptr = arr;
    for (i = 0; i < size ; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of elements of array is %d\n", sum);
}