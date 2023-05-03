#include<stdio.h>

int main(){
	
	int y,s;
	
	printf("Enter your year of service:");
	scanf("%d",&y);
	
	printf("Enter your salary amount:");
	scanf("%d",&s);
	
	printf("\nyear of service: %d",y);
	printf("\nemployee salary: %d",s);


	if(y>5){

		s = s*0.05;
		
		printf("\nbonus amount: %d",s);
	}
	
	else{
	
		printf("\nemployee service is less than 5 year");
	}
	return 0;
}