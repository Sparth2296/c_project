#include<stdio.h>

void Cube(int *a,int *cube){
	
		*cube= *a * *a * *a;
		
}

main()
{
	int size,cube;
	
   	printf("Enter the any Array :");
	scanf("%d",&size);
	
	int array[size][size];
	
	for(int i=0; i<size; i++){
		
	 	for(int j=0; j<size; j++){
			
	    	printf("a[%d][%d]:",i,j);
	    	scanf("%d",&array[i][j]);
			
          }
          }

         for(int i=0; i<size; i++){
   	
   	        for(int j=0; j<size; j++){
    	
		     Cube(&array[i][j],&cube);
		
	         printf("%d,",cube);	
    		
          }
	     	printf("\n");
	      }


}
