#include <stdio.h>

void create_array(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
}

void display_array(int arr[], int n){
    int i;
    printf("The array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main(){
    int n, arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    create_array(arr, n);
    display_array(arr, n);
    

}