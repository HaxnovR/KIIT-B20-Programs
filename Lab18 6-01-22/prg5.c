#include<stdio.h>

void sort(int *arr, int len){
    int temp;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if (*(arr + j) < *(arr + i)) {
  
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main(){
    int arr[] = {2,33,24,1,34,65,34,12,53,566,23,41,8};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, len);
    for(int i=0;i<len-1;i++){
        printf("%d,",arr[i]);
    }
    printf("%d",arr[len-1]);

    return 0;
}