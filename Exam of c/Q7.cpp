#include<stdio.h>
main(){
	
	for(int i=10; i>=6; i--){
		for(int j=6; j<=10; j++){
			
			if(i<=j){
				printf("%d",j);
			}else{
				printf("_");
			}
			
		}
		printf("\n");
		
	}

}
