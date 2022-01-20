#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char str[100];
    char copied[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    printf("Original String: %s\n",str);
    for(i=0;i<strlen(str);i++){
        copied[i] = str[i];
    }
    copied[i] = '\0';
    printf("Copied String: %s",copied);
    return 0;
}