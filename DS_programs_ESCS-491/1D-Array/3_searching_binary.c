#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, arr[10], query, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the query: ");
    scanf("%d", &query);
    int low = 0, high = n-1, mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == query){
            printf("%d is found at %d\n", query, mid);
            break;
        }
        else if(arr[mid] < query){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(low>high){
        printf("%d is not found\n", query);
    }


}