#include<stdio.h>
//dsiplay array with space seprated
void display_array(int arr[], int n){
    int i;
    printf("Array elements: ");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

}

//sum and avg of array function
void sum_of_array(int arr[], int n){
    int i, sum=0, avg;
    printf("Sum of elements in array: ");
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
    avg = sum/n;
    printf("average of elements: %d", avg);
}

int main(){
    int n, i, arr[20];
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    //for passing a array in function just write the variable as argument no need to input square brackets or index
    display_array(arr, n);
    sum_of_array(arr, n);
    return 0;
}