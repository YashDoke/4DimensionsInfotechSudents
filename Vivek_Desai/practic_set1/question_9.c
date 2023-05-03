#include<stdio.h>

int main(){
	
	float m,f,i;
	
	printf("Enter the Meter Value: ");
	scanf("%f\n",&m);

	printf("Meter=%f\n",m);

	f = m*3.28084;			// use formula of meter to feet.
	printf("Meter to Feet : %f\n",f);

	i = 12*f;				// use formula of feet to inch.
	printf("Feet to inches %f",i);	
	
	return 0;
}