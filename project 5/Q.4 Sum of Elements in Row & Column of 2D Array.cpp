#include<stdio.h>
main(){
	
	int row,col;
	
	printf("Enter the value of row :");
	scanf("%d",&row);
	
	printf("Enter the value of column :");
	scanf("%d",&col);
	
	int array[row][col];
	
	for(int i=0; i<row; i++){
		
		for(int j=0; j<col; j++){
			
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
				
		}
	}

    int n,m,rsum=0,csum=0;
    
    // SUM OF ROW.
    
    printf("Enter row number : ");// get number of row by user.
    scanf("%d",&n);
    
   
    for(int j=0; j<col; j++){
    	
    		printf("%d,",array[n][j]);
	
	            rsum += array[n][j];	
	            
}

	printf("The sum of a row %d : %d \n",n,rsum);
	
       // SUM OF CLOUMN.
       
        printf("Enter column number : ");  // get number of row by user.
        scanf("%d",&m);
    
   
    for(int i=0; i<row; i++){
    	
    		printf("%d,",array[m][i]);
	
	            rsum += array[m][i];	
	            
}

	printf("\nThe sum of a row %d : %d",m,rsum);
	


    	
	
}
