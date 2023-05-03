#include<stdio.h>

int main(){

	int num;
    
    printf("Enter the 4 digit number");
    scanf("%d",&num);

	int first = num/1000;		
	num = num%1000;	

	int second = num/100;	
	num = num%100;

	int therd = num/10;
	int forth = num%10;

	num = forth*1000+therd*100+second*10+first;

	

	printf("%d",num);
	return 0;
}