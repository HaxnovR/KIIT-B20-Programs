#include<stdio.h>

int main(){
    int a,b,c,d,max;
    printf("Enter 4 Integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = a;

    if (b>max)
        max = b;
    if (c>max)
        max = c;
    if (d>max)
        max = d;

    printf("The highest number is: %d", max);
    return 0;
}