#include<stdio.h>

int main(){
    typedef unsigned int alt;
    alt a,b;
    int gcd,lcm;

    printf("Enter a number a:");
    scanf("%d",&a);
    printf("Enter a number b:");
    scanf("%d",&b);
    printf("\nGiven numbers a=%d and b=%d\n\n",a,b);

    int j = (a<b) ? a : b;  
    for(int i=1; i<=j; i++){
        if(a%i==0 && b%i==0){  
            gcd = i;  
        }  
    }  

    lcm = (a*b)/gcd;

    printf("LCM of a and b = %d",lcm);
    return 0;
}