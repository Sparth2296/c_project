#include<stdio.h>

void odd(int n){
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		
   	   printf("a[%d] =",i);
   	  scanf("%d",&arr[i]);
   	  
   	 
   }
   
   for(int i=0; i<n; i++){
		
   	   
   	  
   	  if(arr[i]%2 != 0){
   	  	    printf("Odd number is : \n %d,",arr[i]);
   	  	    
		 } 
   }
   
   
  
	
}
main(){

   int n;
   
   printf("Enter the array number :");
   scanf("%d",&n);
   
   odd(n);
   
   return 0;
   
   
}
