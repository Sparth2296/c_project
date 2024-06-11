#include<stdio.h>
main(){
	int salary;
	float HRA,DA,TA,total;
	
	printf("Enter you salary :");
	scanf("%d",&salary);
	
	printf("Enter your HRA percentages : ");
	scanf("%f",&HRA);
	
	printf("Enter your DA percentages : ");
	scanf("%f",&DA);
	
	printf("Enter your TA percentages : ");
	scanf("%f",&TA);
	
	total = salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100);
	
	printf("Gross Salary:RS %f ",total);
	
	

}
