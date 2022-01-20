#include<stdio.h>

struct DOB{
    int date,month,year;
};
struct student{
    char Name[50];
    int roll;
    struct DOB db;
};


int main(){
    int n;
    printf("Enter the Number of Students : ");
    scanf("%d",&n);
    struct student std[n];

    for(int i=0;i<n;i++){
        printf("Enter Detail for Student %d:\nName: ",i+1);
        getchar();
        fgets(std[i].Name,sizeof(std[i].Name),stdin);
        printf("Roll:");
        scanf("%d",&std[i].roll);
        printf("Date(DD MM YYYY):");
        scanf("%d %d %d",&std[i].db.date,&std[i].db.month,&std[i].db.year);
    }
    int avg = 0;
    struct student *p;
    for(int i=0;i<n;i++){
        p = &std[i];
        printf("\n\nDetails of student %d",i+1);
        printf("\nName:%s",p->Name);
        printf("Roll:%d",p->roll);
        printf("\nDOB:%d/%d/%d",p->db.date,p->db.month,p->db.year);
    }

    return 0;
}
