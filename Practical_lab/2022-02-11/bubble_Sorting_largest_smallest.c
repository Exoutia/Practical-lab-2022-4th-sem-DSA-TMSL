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



//helper function to swap position of data with each other used in sorting
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//Bubble sorting
void bubble_sort(int arr[], int n){
    int i, j;
    for(i=0;i<=n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//Selection sort
void selection_sort(int arr[], int n){
    int i, j, min_idx;
    for(i=0; i<n-1; i++){
        min_idx=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

//largest element in array
void largest(int arr[], int n){
    bubble_sort(arr, n);
    int large, small;
    small=arr[0];
    large=arr[n-1];
    printf("\nlargest array elements: %d\n", large);
    printf("smallest number in array: %d\n", small);
}


int main(){
    int n, i, arr[20], arr1[20], size, found;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    printf("bubble sort: \n");
    bubble_sort(arr, n);
    display_array(arr, n);
    largest(arr, n);

    //second array for selection sort
    printf("Enter the number of elements in 2nd array: ");
    scanf("%d", &size);
    for(i=0;i<size;i++){
        printf("Enter the element: ");
        scanf("%d", &arr1[i]);
    }
    selection_sort(arr1, size);
    display_array(arr1, size);
    largest(arr1, size);


   
    return 0;
}