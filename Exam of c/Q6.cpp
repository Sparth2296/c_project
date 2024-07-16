#include<stdio.h>

struct Marcet{
	char fruit[25];
	char color[25];
	
};

main(){
	
	int n;
	
	printf("Enter tne number of n :");
	scanf("%d",&n);
	
	struct Marcet marcet[n];
	
	
	FILE *ptr= NULL;
	ptr =fopen("data.txt","w");
	
	for(int i=0; i<n; i++){
		
		printf("Enter the fruite name :");
		scanf("%s",&marcet[i].fruit);
		
		printf("Enter the color of fruite :");
		scanf("%s",&marcet[i].color);
		
		fprintf(ptr,"fruite : %s\ncolor : %s\n\n",&marcet[i].fruit,&marcet[i].color);
		
	}
	
	fclose(ptr);
	
	printf("Your diteile writeen .");
	
      
}
