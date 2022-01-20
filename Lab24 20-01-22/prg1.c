#include<stdio.h>

union ABC{
    char a;
    int b;
};

int main(){
    union ABC obj;
    obj.a = 'A';
    printf("obj a = %c",obj.a);
    obj.b = 1088;
    printf("\nobj a = %d",obj.b);
    obj.a = 'A';
    obj.b = 1088;
    printf("\nobj a = %d",obj.a);
    printf("\nobj b = %d",obj.b);

    return 0;
}