#include<stdio.h>
main(){
	
	int n;
	
	printf(" Enter the array's size : ");
	
	scanf("%d",&n);
	
	int array[n];
	
	printf("Enter array's element : \n");
	
	for(int  i=0; i<n;  i++ )
	{
		
	    printf("a[%d]",i);
		
		scanf("%d",&array[i]);
		
	}
	
	printf("Negetive element from an Array : ");
	
	for(int i=0; i<n; i++)
	{ 
	    if(array[i]<0){
	    	
	    	printf("%d,",array[i]);
	    	
	    	
		}
	}

}
