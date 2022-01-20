#include<stdio.h>

struct Book{
    char Name[50];
    int Price,Pages;
};

int main(){
    int n;
    printf("Enter the Number of Books : ");
    scanf("%d",&n);
    struct Book bk[n];

    for(int i=0;i<n;i++){
        printf("Enter Detail for Book %d:\nName: ",i+1);
        getchar();
        fgets(bk[i].Name,sizeof(bk[i].Name),stdin);
        printf("Price:");
        scanf("%d",&bk[i].Price);
        printf("Pages:");
        scanf("%d",&bk[i].Pages);
    }
    int avg = 0;
    struct Book *p;
    for(int i=0;i<n;i++){
        p = &bk[i];
        printf("\n\nDetails of book %d",i+1);
        printf("\nName:%s",p->Name);
        printf("Price:%d",p->Price);
        printf("\nPages:%d",p->Pages);
    }

    return 0;
}
