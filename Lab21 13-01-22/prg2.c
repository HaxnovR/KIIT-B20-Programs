#include<stdio.h>
#include<stdlib.h>

#define ROW 4
#define COL 5

void getLargest(int (*arr)[COL], int *arrLar){
    int max,i,j;
    printf("%d || %d\n\n",ROW,COL);
    for(i=0;i<ROW;i++){
        max = 0;
        for(j=0;j<COL;j++){
            if(*(*(arr+i)+j)>max){
                max = *(*(arr+i)+j);
            }
        }
        *(arrLar + i) = max;
    }
}

int main(){
    int i,j;
    printf("For a 3x3 Matrix\n\n");

    int arr[ROW][COL];
    int Lar[COL];

    printf("Enter array 1 elements:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("Enter array[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    getLargest(arr, Lar);
    printf("Sum of Rows\n");
    for(i=0;i<COL;i++){
            printf("%d\n",*(Lar + i));
    }
    return 0;
}