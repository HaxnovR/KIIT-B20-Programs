#include<stdio.h>
int main(){
    int i,j,n1,n2,sum;

    printf("Enter Row Limit:");
    scanf("%d",&n1);
    printf("Enter Column Limit:" );
    scanf("%d",&n2);

    int arr[n1][n2];
    int arrSum[n1];

    printf("Enter array 1 elements:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("Enter array2 [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        sum = 0;
        for(j=0;j<n2;j++){
            sum += *(*(arr + i)+j) ;
        }
        arrSum[i] = sum;
    }
    printf("Sum of Rows\n");
    for(i=0;i<n1;i++){
            printf("%d\n",*(arrSum + i));
    }
    return 0;
}