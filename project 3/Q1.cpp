 #include<stdio.h>
main(){
	
	char ch = 'a';
	
	do{
		printf("'%c' ",ch);
		
		ch += 4; //move to 3 char.
		
		}while (ch <= 'z');

}
