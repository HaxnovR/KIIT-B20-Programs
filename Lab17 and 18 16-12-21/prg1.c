#include<stdio.h> //Q1 . 4x5 Matrix

int main(){
    int row, col; //do 4x5 as per question
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int mat[row][col]; //initialize matrix
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of [%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0;i<row;i++){ //print matrix
        for(int j = 0;j<col;j++){
            printf("%d , ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}