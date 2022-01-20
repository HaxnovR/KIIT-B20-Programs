#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    int i=0,j=0,len;
    printf("Enter a String 1: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter a String 2: ");
    fgets(s2,sizeof(s2),stdin);
    if(strlen(s1)>strlen(s2))len = strlen(s1);
    else{
        len = strlen(s2);
    }
    printf("Len : %d",len);
    for(i;i<len;i++){
        if(s1[i]!=s2[i]){
            printf("Strings mismatch at pos [%d]",i);
            break;
        }
    }
    return 0;
}