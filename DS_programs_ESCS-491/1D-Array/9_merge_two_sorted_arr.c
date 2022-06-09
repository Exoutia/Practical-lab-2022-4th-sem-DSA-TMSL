#include <stdio.h>

void merge_arr(int a[], int b[], int c[], int m, int n){
    int i, j, k;
    i = j = k = 0;
    while(i < m && j < n){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < m){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j < n){
        c[k] = b[j];
        j++;
        k++;
    }
}

void main(){
    int a[20], b[20], c[40];
    int i, m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("\nEnter the size of the second array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the first array: ");
    for(i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the elements of the second array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    merge_arr(a, b, c, m, n);
    printf("\nThe merged array is: ");
    for(i = 0; i < m + n; i++){
        printf("%d ", c[i]);
    }
}
