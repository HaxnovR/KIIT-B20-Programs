#include<stdio.h>

int main(){
    FILE *fp;
    int chr=0,space=0,newline=0;
    fp = fopen("prg4data.dat","r");
    int ch = getc(fp);
    while(ch != EOF){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))chr++;
        if(ch == ' ')space++;
        if(ch == '\n')newline++;
        ch = getc(fp);
    }
    
    printf("chars = %d\nspaces = %d\nnew lines = %d",chr,space,newline);
    fclose(fp);

    return 0;
}