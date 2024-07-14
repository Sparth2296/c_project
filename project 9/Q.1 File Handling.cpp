#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	FILE *oddfile,*evenfile;
	int i,mod;
	
	oddfile = fopen("odd.txt","w");
	
	
	 // open the odd file  and write
	if(oddfile==0){	
	}
	
// open the even file and write text.
	evenfile = fopen("even.txt","w");
	// 
	if(evenfile==0){	
	}
	

	for(i=50; i<=70; i++){
		
// difind modulo
	   mod= i%2;
	   
	   if(mod ==0){
			   	fprintf(evenfile," %d,",i);  // print even number.
	   }else{
	   	fprintf(oddfile,"%d,",i); // printf odd number.
	   }	
	}
	
// close all file
	fclose(oddfile);
	fclose(evenfile);
	
	    printf("Numbers written to files successfully.\n");

}
	

	