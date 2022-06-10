#include <stdio.h>

void main()
{
    int a[20], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p;
    int i;

    p = a;
    for (i = 0; i < size; i++)
    {
        printf("\n%d\n", *p);
        p++;
    }
}