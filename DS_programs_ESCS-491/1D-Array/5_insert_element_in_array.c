#include <stdio.h>
void main(){
    int i, n, arr[20], element;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &arr[i]);
    }
}