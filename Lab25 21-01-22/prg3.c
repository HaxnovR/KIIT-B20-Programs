#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("prg3data.dat","r");
    int ch = getc(fp);
    while(ch != EOF){
        putchar(ch);
        ch = getc(fp);
    }
    
    fclose(fp);

    return 0;
}