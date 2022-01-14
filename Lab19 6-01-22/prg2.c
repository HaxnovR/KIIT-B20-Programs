#include<stdio.h>
void fact(int *a){
    int lim = *a;
    *a = 1;
    for(int i = 1; i<=lim;i++){
        *a = *a * i;
    }
}
int main(){
    int c;
    printf("Enter a Number: ");
    scanf("%d",&c);
    fact(&c);
    printf("Factorial = %d", c);
    return 0;
}