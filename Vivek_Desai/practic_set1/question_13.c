#include<stdio.h>

int main(){

	int num=2565;

	int first = num/1000;		
	num = num%1000;	

	int second = num/100;	
	num = num%100;

	int therd = num/10;
	int forth = num%10;

	int x = (first+2)*1000+(second+2)*100+(therd+2)*10+(forth+2);     //(first+2)*1000=(2+2)*1000=4000 (4000+700+80+7=4787)

	

	printf("%d",x);
	return 0;
}