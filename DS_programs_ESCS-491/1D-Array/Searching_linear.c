#include <stdio.h>

void main(){
    int n, arr[n], i, query, found = 0, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the query: ");
    scanf("%d", &query);
    for(i=0; i<n; i++){
        if(arr[i] == query){
            found = 1;
            pos = i;
            break;
        }
    }
    if(found == 1){
        printf("The query is found at position %d", pos+1);
    }
    else{
        printf("The query is not found");
    }

}
