#include<stdio.h>

int main(){

	int num=18582;

	int first = num/10000;		//18582/10000=1.8582
	num = num%10000;		    //18582%10000=8582

	int second = num/1000;		//8582/1000=8.582
	num = num%1000;			    //8582%1000=582

	int therd = num/100;		//582/100=5.82
	num = num%100;			    //582%100=82

	int forth = num/10;		    //82/10=8.2
	int fith = num%10;		    //82%10=2

	printf("First+second_last:%d ",first+forth);
	return 0;
}