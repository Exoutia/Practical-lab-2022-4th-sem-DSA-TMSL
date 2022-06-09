#include <stdio.h>

int merge(int a[], int b[], int c[], int n, int m)
{
    int i, j, k;
    i = j = k = 0;
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
        return k;
}

void print_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


void main(){
    int arr3[20];
    int arr1[5] = {1,7,88,65,6};
    int arr2[8] = {6,7,8,9,10,11,12,13};
    int size = merge(arr1, arr2, arr3, 5, 8);
    printf("arr3: ");
    print_array(arr3, size);

}