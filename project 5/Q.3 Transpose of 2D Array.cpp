#include<stdio.h>
main(){
    int x,y;
    
    printf("Enter the value of x(rows) :");
    scanf("%d",&x);
    
     
    printf("Enter the value of y(column) :");
    scanf("%d",&y);
    
    int matrix [x][y];
    
    for (int i=0; i<x; i++){
    	for(int j=0; j<y; j++){
    		
    		printf("a[%d][%d] :",i,j);
    		scanf("%d",&matrix[i][j]);
    		
		}
		
	}
		printf("The value of array : \n");
	
	for (int i=0; i<x; i++){
    	for(int j=0; j<y; j++){
    	
    		printf("%d",matrix[j][i]);
    		
		}
		printf("\n");
		
	}
	
	
}
