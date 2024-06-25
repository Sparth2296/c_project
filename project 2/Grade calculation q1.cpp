#include<stdio.h>
main(){
   int score;
   
   printf("Enter your sccore : ");
   scanf("%d",&score);
   
   if(score<=100 && score >=85){
       printf("Your gread is A."); 	
   	}else if(score<=85 && score >=70){
       printf("Your gread is B.");
   	}else if(score<=70 && score >=55){
       printf("Your gread is C.");
   	}else if(score<=55 && score >=40){
       printf("Your gread is E.");
   }else {
   	  printf("Your gread is F.");
   }
   
   
}
