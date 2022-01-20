#include<stdio.h>

struct employee{
    char Name[50],address[100];
    int age,salary;
};

int main(){
    int n;
    printf("Enter the Number of Employees : ");
    scanf("%d",&n);
    struct employee emp[n];

    for(int i=0;i<n;i++){
        printf("Enter Detail for Employee 1:\nName: ");
        getchar();
        fgets(emp[i].Name,sizeof(emp[i].Name),stdin);
        printf("Age:");
        scanf("%d",&emp[i].age);
        printf("Address:");
        getchar();
        fgets(emp[i].Name,sizeof(emp[i].Name),stdin);
        printf("Salary:");
        scanf("%d",&emp[i].salary);
    }
    int avg = 0;
    for(int i=0;i<n;i++){
        avg += emp[i].salary;
    }
    printf("\nAverage Salary = %d",avg/n);

    return 0;
}
