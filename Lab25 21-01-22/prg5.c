#include<stdio.h>

int main(){
    FILE *fp1,*fp2;
    fp1 = fopen("prg5datain.dat","r");
    fp2 = fopen("prg5dataout.dat","w");
    int ch = getc(fp1);
    while(ch != EOF){
        putc(ch,fp2);
        ch = getc(fp1);
    }
    
    fclose(fp1);
    fclose(fp2);

    return 0;
}