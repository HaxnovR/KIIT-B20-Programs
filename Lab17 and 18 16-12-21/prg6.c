/* C Program to check Matrix is a Symmetric Matrix or Not */
 
#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns;
	int a[10][10], b[10][10];
	int Count = 1;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++){ //scan original matrix
   		for(columns = 0;columns < j;columns++){
      		scanf("%d", &a[rows][columns]);
    	}
  	}
 	for(rows = 0; rows < i; rows++){ //transpose
   		for(columns = 0;columns < j; columns++){
      		b[columns][rows] = a[rows][columns];
    	}
  	}
     
 	for(rows = 0; rows < i; rows++){ //check symmetry
   		for(columns = 0; columns < j; columns++){
    		if(a[rows][columns] != b[rows][columns]){
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 1){
  		printf("\n The Matrix is a Symmetric Matrix ");
	}
	else{
		printf("\n The Matrix is Not a Symmetric Matrix ");
	}
  	
 	return 0;
}