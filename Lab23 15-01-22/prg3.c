#include<stdio.h>

#define COL 5

int getSum(int (*arr)[COL], int ROW){
    int sum,i,j,total=0;
    for(i=0;i<ROW;i++){
        sum = 0;
        for(j=0;j<COL;j++){
            sum += *(*(arr+i)+j);
        }
        total += sum;
    }
    return total;
}

int main(){
    int i,j,ROW;
    printf("For a Matrix\n\nEnter number of Rows:");
    scanf("%d",&ROW);

    int arr[ROW][COL];
    int arrSum;

    printf("Enter array 1 elements:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("Enter array[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    arrSum = getSum(arr,ROW);
    printf("Sum of Matrix = %d",arrSum);
    
    return 0;
}