#include<stdio.h>
int main(){
    int i,j,sum1=0,sum2=0,n1,n2=3,x;
    int *p;

    printf("Enter Row Limit:");
    scanf("%d",&n1);
    // Column Limit = 3
    printf("Number of Columns is Fixed to 3\n" );

    int arr[n1][n2];

    printf("Enter array 1 elements:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("Enter array2 [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter array 1 elements:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",*(*(arr + i)+j) );
        }
        printf("\n");
    }
    return 0;
}