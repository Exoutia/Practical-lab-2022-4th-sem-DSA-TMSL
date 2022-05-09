#include <stdio.h>
//to pass a array as a function we need to fisrt pass args like row and column
void display_matrix(int row, int column, int arr[row][column]){
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

}
//to create a matrix given as args
void create_matrix(int rows, int cols, int arr[rows][cols]){
    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the data at %d,%d: ", i, j);
            scanf("%d", &arr[i][j]);
            
        }
    }
}

//to transpose a matrix
void tranpose_a_matrix(int rows, int cols, int arr[rows][cols], int trans[rows][cols]){
    printf("transpose of matrix given: \n");
    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            trans[j][i] = arr[i][j];
            
        }
    }
} 

//to addition of two matrix
void addition_of_matrix(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int sum[rows][cols]){
    printf("Additon of two matrix: \n");
    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
           sum[i][j] = arr1[i][j] + arr2[i][j];
            
        }
    }
}

//multiplcation of matrix
void multiply(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int mul[rows][cols]){
    printf("Multiplication of two matrix:\n");
    int i, j, k;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            mul[i][j]=0;
            for(k=0; k<cols; k++){
                mul[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
}


void main(){
    int rows, cols, arr[25][25], arr1[25][35], sum[25][25], trans[25][25], mul[25][25];
    printf("Enter the rows and columns space seperated: ");
    scanf("%d %d", &rows, &cols);
    create_matrix(rows, cols, arr);
    display_matrix(rows, cols, arr);
    create_matrix( rows, cols, arr1);
    display_matrix(rows, cols, arr1);
    addition_of_matrix(rows, cols, arr, arr1, sum);
    display_matrix(rows, cols, sum);
    tranpose_a_matrix(rows, cols, sum, trans);
    //to display transpose we need to interchage rows and columns  
    display_matrix(cols, rows, trans);
    multiply(rows, cols, arr, arr1, mul);
    display_matrix(rows, cols, mul);



}