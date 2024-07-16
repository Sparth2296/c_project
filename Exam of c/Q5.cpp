#include<stdio.h>

struct Leptop{
	char company[50];
	char name[50];
	char processer[25];
	int price;
	
};
main(){
	
	int n;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	struct Leptop leptop[n];
	
	for(int i=0; i<n; i++){
		
		printf("Leptop : %d\n",i+1);
		
		printf("Company :\n");
		scanf("%s",&leptop[i].company);
		
			printf("Name :\n");
		scanf("%s",&leptop[i].name);
		
			printf("Processer :\n");
		scanf("%s",&leptop[i].processer);
		
			printf("Price :\n");
		scanf("%d",&leptop[i].price);
		
	} 
	
	for(int i=0; i<n; i++){
		
		printf("Company => %s\n",leptop[i].company);
		printf("Name => %s\n",leptop[i].name);
		printf("Processer => %s\n",leptop[i].processer);
		printf("Price => %d\n",leptop[i].price);

}
}
