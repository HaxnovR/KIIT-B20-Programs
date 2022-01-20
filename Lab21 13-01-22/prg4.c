#include<stdio.h>

int main(){
    int i=0,len=0;
    char str[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    do{
        len++;
        i++;
    }
    while (str[i]!='\0');
    printf("Length of the String by while loop = %d",len-1);

    printf("\nBy for loop\n\n");
    len=0;
    for(i=0;i<sizeof(str);i++){
        if(str[i]=='\0')break;
        len++;
    }
    
    printf("Length of the String by for loop = %d",len-1);
    return 0;
}