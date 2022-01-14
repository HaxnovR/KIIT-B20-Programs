// Scalar mult
#include<stdio.h>

int main(){
    int row, col; //get dimensions from user
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);

    if(row!=col){ 
        printf("Enter a Square Matrix");
    }
    else{
    int mat[row][col];//initialize matrices
    int mult_mat[row][col]; //init multiplied matrix
    int n;// the number to multiply with

    for(int i = 0;i<row;i++){ //get matrix values from user
        for(int j = 0;j<col;j++){
            printf("Enter the value of [%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter a number to multiply with: ");
    scanf("%d",&n);
    printf("Original Matrix ---> \n");

    for(int i = 0;i<row;i++){ //print original matrix
        for(int j = 0;j<col;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; ++i){ //multiply matrix
        for (int j = 0; j < col; ++j) {
        mult_mat[i][j] = mat[i][j]*n;
        } 
    }
    printf("\nMultiplied matrix:\n");
    for (int i = 0; i < col; ++i){ //print multiplied matrix
        for (int j = 0; j < row; ++j) {
        printf("%d  ", mult_mat[i][j]);
        }
        printf("\n");
        }
    }
    return 0;
}