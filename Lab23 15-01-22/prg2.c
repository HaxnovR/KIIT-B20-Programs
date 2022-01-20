#include<stdio.h>
int main(){
   int i,sum1=0,n1;
   int *p1;

   printf("Enter array 1 Limit:");
   scanf("%d",&n1);

   int arr1[n1];

   printf("Enter array 1 elements:\n");
   for(i=0;i<n1;i++){
        printf("Enter array1 [%d]:",i);
        scanf("%d",&arr1[i]);
   }
   p1 = arr1;
   for(i=0;i<n1;i++){
      sum1 = sum1 + *(p1+i);
   }

   printf("Sum = %d",sum1);

   return 0;
}