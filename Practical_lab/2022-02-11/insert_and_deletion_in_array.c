#include<stdio.h>
//dsiplay array with space seprated
void display_array(int arr[], int n){
    int i;
    printf("\nArray elements: ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

}

//swapping function helper
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insert_in_array(int arr[], int n){
    int i, pos, data;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    printf("\nEnter data at positoon %d: ", pos);
    scanf("%d", &data);
    if(pos > n || pos < 1){
        printf("invalid position.");
    }
    else{
        for(i=n-1; i>=pos -1; i--){
        arr[i+1]=arr[i];
        }
        arr[pos - 1]=data;
    }

}
void delete_in_array(int arr[], int n){
    int i, pos;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if(pos > n || pos < 1){
        printf("invalid position.");
    }
    else{
        for(i=pos-1; i<n -1; i++){
        arr[i]=arr[i+1];
        }
    }
}

int main(){
    int n, i, arr[20], arr1[20], size, found;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
       printf("Enter the element: ");
       scanf("%d", &arr[i]);
    }
    display_array(arr, n);
    insert_in_array(arr, n);
    display_array(arr, n+1);
    delete_in_array(arr, n+1);
    display_array(arr, n);
}







