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

//to do the square of matrix.
void square_of_elements(int row, int col, int arr[row][col]){
    int i, j;
    for(i=0;i<row;i++){
        for (j = 0; j < col; j++)
        {
            arr[i][j] *= arr[i][j];
        }
        
    }
}

void main(){
    int row, col, arr[25][25];
    printf("Enter the arr row and col: ");
    scanf("%d %d", &row, &col);
    create_matrix(row, col, arr);
    display_matrix(row, col, arr);
    square_of_elements(row, col, arr);
    printf("Square of matrix:\n");
    display_matrix(row, col, arr);
}










