#include<stdio.h>


int main(){
	
	int X,Y,temp;
	
	printf("Enter the Value of X: ");
	scanf("%d",&X);

	printf("Enter the Value of Y: ");
	scanf("%d",&Y);
	
	printf("X=%d : Y=%d",X,Y);

	temp = X;
	X = Y;
	Y = temp;
	printf("\n/******/\n");
	printf("X=%d : Y=%d",X,Y);  //replace to each other

	return 0;
}