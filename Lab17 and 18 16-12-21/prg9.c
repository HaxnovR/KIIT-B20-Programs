#include<stdio.h>

int main(){
    int row, col;
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
    int max = mat[0][0];
    for(int i = 0;i<row;i++){ //Find largest
        for(int j = 0;j<col;j++){
            if(mat[i][j]>max){
                max = mat[i][j];
            }
        }
    }
    printf("The largest number is: %d",max);
    return 0;
}