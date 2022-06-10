#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int n){
    int i, j, min_index;
    for(i=0;i<n;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

void main(){
    int arr[20], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, size);
    printf("The sorted array is: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}