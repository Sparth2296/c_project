#include<stdio.h>
main(){
	
   int sub=5,sum=0,aevreg=0;
   
   int arr[sub];
   
   for(int i=0; i<sub; i++){
   
   
   printf("subject[%d]",i+1);
   scanf("%d",&arr[i]);
    sum +=arr[i];
}

  for(int i=0; i<sub; i++){
  	
  	aevreg= sum/5;
  	
  	
}

printf("Your aevreg is %d\n",aevreg);

if(aevreg >=90){
	printf(" Your gread is A");
	
	
}else if(aevreg >=80){
	printf(" Your gread is B");
		
}else if(aevreg >=70){
	printf(" Your gread is C");
		
}else if(aevreg >=60){
	printf(" Your gread is D");
		
}else{
	printf("Your gread is F");
}
  }
  
  