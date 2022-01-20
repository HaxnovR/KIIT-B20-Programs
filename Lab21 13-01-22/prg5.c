#include<stdio.h>
#include<string.h>

int main(){
    char str[100],c;
    int freq=0;
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter a character to find its frequency: ");
    scanf(" %c",&c);

    for(int i=0;i<strlen(str);i++){
        if(str[i]==c)freq++;
    }

    printf("Frequency of %c = %d",c,freq);
    return 0;
}