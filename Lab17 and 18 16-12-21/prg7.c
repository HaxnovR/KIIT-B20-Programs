#include<stdio.h> //Reverse of matrix

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
    printf("Original matrix --->\n");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Reverse matrix --->\n"); //Reverse matrix
    for(int i = row-1;i>=0;i--){
        for(int j = col-1;j>=0;j--){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}