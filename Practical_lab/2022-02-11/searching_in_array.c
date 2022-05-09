#include<stdio.h>
//dsiplay array with space seprated
void display_array(int arr[], int n){
    int i;
    printf("Array elements: ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

}

//linear searching
int search(int arr[], int n){
    int found, i, query;
    printf("what number is to find: ");
    scanf("%d", &query);
    for(i=0;i<n;i++){
        if(query == arr[i]){
            found = i+1;
            break;
        }
        else{
            found = -1;
        }
    }
    return found;
}

int main(){
    int n, i, arr[20];
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    int found = search(arr, n);

    //for passing a array in function just write the variable as argument no need to input square brackets or index
    display_array(arr, n);
    if(found!=-1){
        printf("Found at position: %d", found);
    }
    else{
        printf("Not found");
    }
    return 0;
}