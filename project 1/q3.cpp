#include<stdio.h>
main(){
	
	int First_angle,Second_angle,Third_angle;
	
	printf("Enteer  the two angle of Triangle :\n");
	
	printf("First_angle = ");
	scanf("%d",&First_angle);
	printf("Second_angle = ");
	scanf("%d",&Second_angle);
	
	Third_angle = 180 - (First_angle + Second_angle);
	
	printf("Third_angle : %d",Third_angle);
	

}
