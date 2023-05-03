#include<stdio.h>

int main(){

	float f,c;
	
	printf("Enter the Fahrenheit:");
	scanf("%f",&f);
	
	printf("Fahrenheit:%f",f);

	c = (f-32)*5/9;      // formula of fahrenhrit to celcius convertion
	printf("\nCelcius:%f",c);
	return 0;
}