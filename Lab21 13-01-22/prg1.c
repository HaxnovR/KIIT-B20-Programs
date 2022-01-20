#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void getSum(int (*arr)[COL], int *arrSum){
    int sum,i,j;
    for(i=0;i<ROW;i++){
        sum = 0;
        for(j=0;j<COL;j++){
            sum += *(*(arr+i)+j);
        }
        *(arrSum + i) = sum;
    }
}

int main(){
    int i,j;
    printf("For a 3x3 Matrix\n\n");

    int arr[ROW][COL];
    int arrSum[COL];

    printf("Enter array 1 elements:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("Enter array[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    getSum(arr, arrSum);
    printf("Sum of Rows\n");
    for(i=0;i<COL;i++){
            printf("%d\n",*(arrSum + i));
    }
    return 0;
}