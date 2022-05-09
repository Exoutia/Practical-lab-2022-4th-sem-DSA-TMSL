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

//to find if matrix is identity matrix or not
void is_unit(int row, int col, int arr[row][col]){
    if(row != col){
        printf("Not a unit matrix.\nCause its not a square matrix.");
        return;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col;j++)
        {
            if((i==j) && arr[i][j] != 1){
                printf("Not a unit matrix.");
                return;
            }
            else if (i!=j && arr[i][j]!=0)
            {
                printf("Not a unit matrix.");
                return;
            }

            
        } 
    }
    printf("A unit matrix.");
    
    
    
}

void main(){
    int row, col, arr[25][25];
    printf("Enter the arr row and col: ");
    scanf("%d %d", &row, &col);
    create_matrix(row, col, arr);
    display_matrix(row, col, arr);
    is_unit(row, col, arr);
}










