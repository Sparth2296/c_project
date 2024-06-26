#include<stdio.h>
main(){
    int rows=4;
    int count=11;
    int i,j;
    
    for(i=1;i<=rows;i++){
    	for(j=1;j<=i;j++){
    		
    		printf("%d ",count);
    		count++;
    		
		}
		printf("\n");
	}
	
}
