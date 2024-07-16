#include<stdio.h>
main(){
	
	int row,col,sum;
	

	
	printf("Enter the row : ");
	scanf("%d",&row);
	
	printf("Enter the column : ");
	scanf("%d",&col);
	
	int array[row][col];
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			
			printf("a[%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
			sum+=array[i][j];
	}
	}
		float aev;
		
		aev =  sum/(row*col);
		printf("Your aevreg is : %.2f",aev);

}


