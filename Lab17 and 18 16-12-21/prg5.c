// Add two 4x4 matrices
#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    if(row!=col){ //check if square matrix
        printf("Enter a Square Matrix");
    }
    else{
    int mat1[row][col];//initialize matrices
    int mat2[row][col]; //2nd matrix
    int mat_add[row][col]; 
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of [%d][%d] for mat1= ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of [%d][%d] for mat2= ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Original Matrices ---> \n");
    printf("mat1");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("mat2");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; ++i){ //adding 2 matrices
        for (int j = 0; j < col; ++j) {
        mat_add[i][j] = mat1[i][j]+mat2[i][j];
        } 
    }
    printf("\nAdded matrix:\n");
    for (int i = 0; i < col; ++i){
        for (int j = 0; j < row; ++j) {
        printf("%d  ", mat_add[i][j]);
        if (j == row - 1){
            printf("\n");
        }
        }
    }
    return 0;
    }
}