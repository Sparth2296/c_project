#include<stdio.h>
main(){
   int score;
   char grade;
   
   printf("Enter your score : ");
   scanf("%d",&score);
   
   if(score<=100 && score >=85){
   	
       printf("Your gread is A.");
       grade='A';
	    	
   	}else if(score<=85 && score >=70){
   		
       printf("Your gread is B.");
       grade='B';
       
   	}else if(score<=70 && score >=55){
   		
       printf("Your gread is C.");
       grade='C';
       
   	}else if(score<=55 && score >=40){
   		
       printf("Your gread is D.");
       grade='D';
       
   }else {
   	
   
   	  grade='F';
   	  
   }
   
   
   
   
 switch(grade){
 
	case 'A' :
 		printf("Excellent work!");
 		break;	
 		
    case 'B' :
 		printf("Well done");
 		break;
 		
 	case 'C' :
 		printf("Good job");
 		break;
 		
 	case 'D' :
 		printf("You passed, but you could do better");
 		break;
 		
 	case 'F' :
 		printf("Sorry, you failed");
 		break;
 				
 }  
   
   
}
