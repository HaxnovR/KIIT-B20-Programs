//count positive numbers from 20 numbers
#include<stdio.h>

int main(){
    int num[20], count;
    printf("Enter 20 Numbers: \n");
    for (int i = 0; i < 20; i++){
        printf("Enter number: ");
        scanf("%d", &num[i]);
        if (num[i]>0){
            count++;
        }
    }
    printf("\nThe total Positive numbers are: %d", count);
    
    return 0;
}