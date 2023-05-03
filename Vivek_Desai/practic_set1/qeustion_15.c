#include<stdio.h>

int main(){

	int num=245;

	int first = num/100;		
	num = num%100;	

	int second = num/10;	
	int third = num%10;

	num = third*100+second*10+first;   //third*100=5*100=500 (500+40+2=542)

	printf("Revers Number: %d",num); 
	
	return 0;
}