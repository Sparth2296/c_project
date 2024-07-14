#include<stdio.h>
#include<string.h>

struct Student{
	
	int roll_on;
	char fs_name[50];
	char sd_name[50];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
};
main(){
	
	int n,sum;
	float pr;
	
	printf("Enter the n value :");
	scanf("%d",&n);
	
	struct Student student[n];
		
		for(int i=0; i<n; i++){
		
		printf("Enter the Student Ditels :\n");
		
	    printf("ROLL NO => ");
		scanf("%d",&student[i].roll_on);
		
		printf("NAME => ");
		scanf("%s",&student[i].fs_name);
		scanf("%s",&student[i].sd_name);
		
		printf("Chemistry => ");
		scanf("%d",&student[i].chem_marks);
		
		printf("Mathematics => ");
		scanf("%d",&student[i].maths_marks);
		
		printf("Physics => ");
		scanf("%d",&student[i].phy_marks);
		
	
		printf("\n");
		
		
		
     for(int i=0; i<n; i++){
     	
        int chem,maths,phy;
     	
     	strcat(student[i].fs_name,student[i].sd_name);
     	
     	printf("\n Student =>%d\n",i+1);
     	printf("Roll no => %d",student[i].roll_on);
		printf(" NAME =>%s\n",student[i].fs_name);			
		printf("Chemistry => %d\n",student[i].chem_marks);
		printf("Mathematics => %d\n",student[i].maths_marks);
		printf("Physics => %d\n",student[i].phy_marks);
		
	
		
		if( student[i].chem_marks > 100 || student[i].maths_marks >100 || student[i].phy_marks > 100 )
		{
			
		 printf("Your marks is more the  100 so this is not valide.");
			
		}else{
		
			
			sum = student[i].chem_marks + student[i].maths_marks + student[i].phy_marks;
			printf("%d of 300\n",sum);
			
			pr= sum/3;
			printf("%.2f\n",pr);
			
		printf("\n");
		}
		
	
}
}
}
	
		
		
	


