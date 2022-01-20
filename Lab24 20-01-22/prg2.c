#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a number a:");
    scanf("%d",&a);
    printf("Enter a number b:");
    scanf("%d",&b);
    printf("\nGiven numbers a=%d and b=%d\n\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("Swapped numbers are a=%d and b=%d",a,b);
    return 0;
}