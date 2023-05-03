#include<stdio.h>

int main(){

	int num=245;

	int first = num/100;		
	num = num%100;	

	int second = num/10;	
	int third = num%10;

	printf("addition:%d",first+second+third);

	
	return 0;
}