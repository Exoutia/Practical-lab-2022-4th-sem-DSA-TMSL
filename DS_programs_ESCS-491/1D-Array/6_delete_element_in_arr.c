#include <stdio.h>

void main(){
    int arr[20], size, data;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(int i=0;i<size;i++){
        printf("Enter the data: ");
        scanf("%d", &arr[i]);
    }
    
    int i,j,k;
    printf("\nBefore deleting element in array:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element to be deleted: ");
    scanf("%d",&k);
    for(i=0;i<size;i++){
        if(arr[i]==k){
            for(j=i;j<size-1;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }
    }
    printf("\nAfter deleting element in array:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    
}