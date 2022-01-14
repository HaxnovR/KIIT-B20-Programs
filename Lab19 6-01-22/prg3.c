// Armstrong Number
// eg 153 = 1^3 + 5^3 + 3^3

#include<stdio.h>  
int main(){    
    int num,r,sum=0,temp;    
    printf("Enter a Number: ");    
    scanf("%d",&num);    
    int *ptr = &sum;
    temp=num;
    while(num>0)    
    {    
        r=num%10;    
        sum=sum+(r*r*r);
        num=num/10;    
    } 
    // printf("Pointer value = %d",*ptr);
    if(temp==*ptr)
        printf("Armstrong");
    else
        printf("NOT Armstrong");
    return 0;  
}   