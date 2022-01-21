#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("prg1data.dat","r");
    int a[10],i,sum=0;

    for(i=0;i<10;i++){
        fscanf(fp,"%d",&a[i]);
        sum += a[i];
    }
    fclose(fp);

    printf("Sum = %d",sum);

    return 0;
}