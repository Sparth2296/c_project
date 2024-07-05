#include<stdio.h>
void SUM(int *a,int *b,int *total){      // FUNCTION OF ADDITION.
	int add = *a + *b;
	*total=add;
}

void SUB(int *a,int *b,int *total){     // FUNCTION OF SUBSTETION.
	int sub = *a - *b;
	*total=sub;
}

void MUL(int *a,int *b,int *total){     // FUNCTION OF MULTIPLICATION.
	int mul = *a * *b;
	*total=mul;
}

void  DIV(int *a,int *b,int *total){      // FUNCTION OF DIVITION.

  if (*a==0 || *b==0){
  	
  	printf("Your number is 0 this is not valide for divition .\n");
  	
  }else{
  	
  	int div = *a / *b;
	*total=div;
  }
	
}
void MOD(int *a,int *b,int *total){      // FUNCTION OF MODULO.

  if (*a==0 || *b==0){
  	
  	printf("Your number is 0 this is not valide for modulo .\n");
  	
  }else{
  	
  	int mod = *a % *b;
	*total=mod;
	
  }
	
}

main(){
	
int choice,a,b,total,i;
	
	
        
            
           
		   
		    for(int i=0; i<999; i++){//USIN FOR LOOP.
            
            
	         printf("\nPress 1 for '+' \n Press 2 for '-'\n Press 3 for '*'\n Press 4 for '/'\n Press 5 for '%' \n Press 0 for exit \n");

                    printf("Enter your choice:");
                    scanf("%d",&choice);
                  
            	   
            if(choice==0){  // WHEN USER ENTER 0 PROGRAM IS END.
            	
            	break;
            	
            	 }	
            	
                	printf("Enter the first number:");
	                scanf("%d",&a);
	
	                printf("Enter the second number:");
	                scanf("%d",&b);
   				
			      
switch(choice){
	         	
		case 1 :
		 	   
		 	     SUM(&a,&b,&total);
		 	    printf("ADDITION OF %d AND %d IS :%d\n",a,b,total);
		 	    break;
		 	   
		case 2 :
		 	   
		 	     SUB(&a,&b,&total);
		 	    printf("SUBSTETION OF %d AND %d IS :%d\n",a,b,total);
		 	    break;
		 	    
		 	    
		case 3 :
			
		    	 MUL(&a,&b,&total);
		 	    printf("MULTIPLICATION OF %d AND %d IS :%d \n",a,b,total);
		 	    break;
		 	
		case 4 :
		 	   
		 	     DIV(&a,&b,&total);
		 	    printf("DIVITION OF %d AND %d IS :%d\n",a,b,total);
		 	    break;
		 	   
		case 5 :
			
			     MOD(&a,&b,&total);
			    printf("MODULO OF %d AND %d IS :%d\n",a,b,total);
			    break;
		
		default :
		    printf("Your number is not valide please enter number below \n");
			

}
}   
}
            		

