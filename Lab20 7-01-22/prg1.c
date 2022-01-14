#include<stdio.h>
int main(){
   int i,sum1=0,sum2=0,n1,n2,x;
   int *p1, *p2;

   printf("Enter array 1 Limit:");
   scanf("%d",&n1);
   printf("Enter array 2 Limit:"); 
   scanf("%d",&n2);

   int arr1[n1], arr2[n2];

   printf("Enter array 1 elements:\n");
   for(i=0;i<n1;i++){
        printf("Enter array1 [%d]:",i);
        scanf("%d",&arr1[i]);
   }
   printf("Enter array 2 elements:\n");
   for(i=0;i<n2;i++){
        printf("Enter array2 [%d]:",i);
        scanf("%d",&arr2[i]);
   }
   p1 = arr1;
   p2 = arr2;

    // Sum
   for(i=0;i<n1;i++){
      sum1 = sum1 + *(p1+i);
   }
   for(i=0;i<n2;i++){
      sum2 = sum2 + *(p2+i);
   }
   if(sum1==sum2)x=0;
   if(sum1>sum2)x=1;
   if(sum1<sum2)x=2;
   printf("\nSum1 = %d\nSum2 = %d",sum1,sum2);
   printf("\nReturned: %d",x);

   return 0;
}