#include <stdio.h>
void main(){
    int i, n, arr[20], element, pos;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position: ");
    scanf("%d", &pos);
    for(i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = element;
    printf("The array after insertion is: ");
    for(i=0;i<n+1;i++){
        printf("%d ", arr[i]);
    }

}