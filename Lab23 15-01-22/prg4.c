#include<stdio.h>

void Largest(int (*arr),int e){
    int max=0,i;
    for(i=0;i<e;i++){
        if(*(arr+i)>max){
            max = *(arr+i);
        }
    }
    *arr = max;
}

int main(){
    int i,e;
    printf("For a Matrix\n\nEnter number of Elements:");
    scanf("%d",&e);
    int arr[e];

    printf("Enter array 1 elements:\n");
    for(i=0;i<e;i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&arr[i]);
        
    }
    int *p = arr;
    Largest(p,e);

    for(i=0;i<e;i++){
        printf("array[%d] = %d\n",i,arr[i]);
    }
    return 0;
}