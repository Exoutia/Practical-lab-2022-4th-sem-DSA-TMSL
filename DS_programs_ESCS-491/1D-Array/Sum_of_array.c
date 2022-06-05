#include <stdio.h>

void main(){
    int n, i, sum = 0;
    int arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("Sum of the array is: %d", sum);
    

}

