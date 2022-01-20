#include <stdio.h>
int o = 5;
void incr(){
    auto int m=1;
    printf("%d\n",m);
    m++;
}
void similar(){
    static int n=1;
    printf("%d\n",n);
    n++;
}
void ext(){
  int o=10;
  printf("The value of o inside ext function is %d",o);
}
void main()
{
    printf("Demonstration of auto storage class :-\n");
    incr();
    incr();
    incr();
    printf("Demonstration of static storage class :-\n");
    similar();
    similar();
    similar();
    printf("Demonstration of ext storage class :-\n");
    ext();
    printf("\nThe value of o outside ext function is %d",o);
    printf("\nDemonstration of register storage class :-");
    register int p;
    for(p=1;p<=10;p++)
    	printf("\n%d",p);

    printf("\n");
} 
