#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    int i=0,j=0;
    printf("Enter a String: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter a String to concatenate: ");
    fgets(s2,sizeof(s2),stdin);
    i = strlen(s1)-1;
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i-1] = '\0';
    printf("Final String : %s",s1);
    return 0;
}