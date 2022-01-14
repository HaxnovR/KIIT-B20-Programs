#include<stdio.h>

void sum(int arr[],int *sum){
    for (int i = 0; i < 8; i++){
        *sum += arr[i];
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8},s = 0;
    int *ptr = &s;
    sum(a,ptr);
    printf("%d",*ptr);
    return 0;
}