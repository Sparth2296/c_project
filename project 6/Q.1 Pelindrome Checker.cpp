#include<stdio.h>
#include<string.h>

main(){
	
	char str[99];
	int len=0,go=0;
	
	printf("Enter youur string :");
	scanf("%s",&str);
	
	// the length of string is calculate.
	for(int i=0; str[i] !='\0'; i++){
		len++;
	}
	
	//check if the string is a pelidrome.
	for(int i=0; i<len/2; i++){
		if(str[i] != str[len -1-i]){
			go=1;
			break;
		}
	}
	
	
	if(go==0){
		printf("The string is a pelindrome .");
	}else{
		printf("The string is not a pelindrome");
	}
	
	
}
