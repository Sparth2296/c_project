#include<stdio.h>
main(){
	 
	 int num,total;
	 
	 printf("Enter the any number :");
	 
	 scanf("%d",&num);// user input number.
	 
	 if (num<0){
	 	
	 	num =-num;// negetive number
	 }
	 
	 if(num==0){
	 	
	 	total =1;//positive number
	 	
	 }else{
	 	
	 	while(num!=0){
	 		
	 		num/=10;
	 		
	 		total++; //increment 
		 }
	 }
	 
	 	 printf("Total number of digits :%d\n",total);
     
}
