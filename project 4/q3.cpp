#include<stdio.h>
main(){
	
	int i,j,rows=5;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=rows;j++){
			
			if(i<=j){
				printf("%d",j);
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}

}
