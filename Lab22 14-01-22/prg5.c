#include<stdio.h>

struct product{
    char Name[50],company[50];
    int price;
};

void func1(char name[],char comp[],int price){
    printf("\nName:%s",name);
    printf("Company Name:%s",comp);
    printf("Price:%d",price);
}

void func2(struct product prod){
    printf("\nName:%s",prod.Name);
    printf("Company Name:%s",prod.company);
    printf("Price:%d",prod.price);
}

int main(){
    struct product pd;
    printf("Enter Details of Product :\nName:");
    fgets(pd.Name,sizeof(pd.Name),stdin);
    printf("Company Name:");
    fgets(pd.company,sizeof(pd.company),stdin);
    printf("Price:");
    scanf("%d",&pd.price);

    func1(pd.Name,pd.company,pd.price);
    func2(pd);
    return 0;
}