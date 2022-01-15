#include<stdio.h>
#include<string.h>
int main(){
    int i,count;
    char a[] = "Yudhistir", b[] = "Bhim", c[] = "Arjun", d[] = "Nakul", e[] = "Sahadev";

    for(i=0;i<strlen(a);i++){
        if(a[i]=='a')count++;
    }
    for(i=0;i<strlen(b);i++){
        if(b[i]=='a')count++;
    }
    for(i=0;i<strlen(c);i++){
        if(c[i]=='a')count++;
    }
    for(i=0;i<strlen(d);i++){
        if(d[i]=='a')count++;
    }
    printf("%d\n",count);
    for(i=0;i<strlen(e);i++){
        if(e[i]=='a')count++;
    }
    printf("Number of a : %d\n",count);

    return 0;
}