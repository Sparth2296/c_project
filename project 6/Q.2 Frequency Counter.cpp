#include<stdio.h>
#include<string.h>

main(){
	
	char str[99];
	int  frequency[256]={0};
	int len=0,go=0;
	
	printf("Enter your string :");
	scanf("%s",&str);
	
	for(int i=0; str[i] != '\0'; i++){
		len++;
		frequency[(int)str[i]]++;

	}
	
	for(int i=0; i<len/2; i++){
		if(str[i]!= str[len-1-i]){
			go=1;
			break;
		}
	}
	
	 if (go == 0) {
	 	
        printf("The string is a palindrome.\n");
        
    } else {
    	
        printf("The string is not a palindrome.\n");
    }
	
	printf("charecter frequency :\n");
	for(int i=0; i<256; i++){
		if(frequency[i] != 0){
			printf("%c: %d\n",i,frequency[i]);
		}
	}
	
}