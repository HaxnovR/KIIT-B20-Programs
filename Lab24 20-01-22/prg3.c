#include<stdio.h>

enum days{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){
    enum days day;
    day = Friday;
    printf("Number related to Friday in enum = %d",day);
    return 0;
}