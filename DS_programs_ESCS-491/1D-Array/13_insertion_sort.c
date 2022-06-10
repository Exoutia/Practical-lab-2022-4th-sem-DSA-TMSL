#include <stdio.h>

void insertion_sort(int arr[], int n){
    int i, j, key;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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
    insertion_sort(arr, size);
    printf("The sorted array is: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}