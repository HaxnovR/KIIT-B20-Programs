//Q8 
#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter x and y coordinates for 10 points ---> \n");
    int cord[10][2]; //initialize 2-d matrix 10x2
    for(int i = 0;i<10;i++){
        printf("Enter the value of x for point %d = ",i+1);
        scanf("%d",&cord[i][0]);
        printf("Enter the value of y for point %d = ",i+1);
        scanf("%d",&cord[i][1]);   
    }
    printf("Original matrix --->\n");
    for(int i = 0;i<10;i++){
        for(int j = 0;j<2;j++){
            printf("%d  ",cord[i][j]);
        }
        printf("\n");
    }
    //Distance Formula:
    int d = sqrt(pow((cord[0][0]-cord[9][0]),2)+pow((cord[0][1]-cord[9][1]),2));
    printf("The distance between first and last point is: %d",d);
    return 0;
}