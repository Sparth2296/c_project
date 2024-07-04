#include<stdio.h>
main(){
    int row,col;
    
    printf("Enter the value of row :");
    scanf("%d",&row);
    
     
    printf("Enter the value of column :");
    scanf("%d",&col);
    
    int array [row][col];
    
    for (int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    		
    		printf("a[%d][%d] :",i,j);
    		scanf("%d",&array[i][j]);
    		
		}
		
	}
		printf("The Largest element : ");
	
	for (int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    	
    		if(array[i][j]< && array[i][j]>){
    		printf("%d",array[i][j]);	
			}
    		
		}
		printf("\n");
		
	}
	
}
