#include<stdio.h>

struct Book{
    char Name[50];
    int Price,Pages,quantity;
};

int main(){
    struct Book book1,book2;
    printf("For Book 1\n");
    printf("Enter the Name :");
    fgets(book1.Name,sizeof(book1.Name),stdin);
    printf("Enter the Price :");
    scanf("%d",&book1.Price);
    printf("Enter the Pages :");
    scanf("%d",&book1.Pages);
    printf("Enter the Qunatity :");
    scanf("%d",&book1.quantity);

    printf("For Book 2\n");
    printf("Enter the Name :");
    getchar();
    fgets(book2.Name,sizeof(book2.Name),stdin);
    printf("Enter the Price :");
    scanf("%d",&book2.Price);
    printf("Enter the Pages :");
    scanf("%d",&book2.Pages);
    printf("Enter the Qunatity :");
    scanf("%d",&book2.quantity);

    printf("\nDetails of Book 1:\nName: %sPages :%d\nQuantity :%d\n",book1.Name,book1.Pages,book1.quantity);
    printf("\nDetails of Book 2:\nName: %sPages :%d\nQuantity :%d\n",book2.Name,book2.Pages,book2.quantity);
    return 0;
}
