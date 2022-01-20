#include <stdio.h>
int o = 5;
void increment()
{
    auto int m=1;
    printf("%d\n",m);
    m++;
}
void same()
{
    static int n=1;
    printf("%d\n",n);
    n++;
}
void external()
{
  int o=10;
  printf("The value of o inside external function is %d",o);
}
void main()
{
    printf("Demonstration of auto storage class :-\n");
    increment();
    increment();
    increment();
    printf("Demonstration of static storage class :-\n");
    same();
    same();
    same();
    printf("Demonstration of external storage class :-\n");
    external();
    printf("\nThe value of o outside external function is %d",o);
    printf("\nDemonstration of register storage class :-");
    register int p;
    for(p=1;p<=10;p++)
    	printf("\n%d",p);

    printf("\n");
} 
