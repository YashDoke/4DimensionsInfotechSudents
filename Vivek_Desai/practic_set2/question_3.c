#include<stdio.h>

int main(){
	
	int d,q,t,cost = 100;
	
	printf("Enter the Quantity: ");
	scanf("%d",&q);
	
	t = q*cost;
	printf("\nTotel cost: %d",t);

	if(t>1000){
		
        d = t*0.1;
        printf("\ncongratulation for discount: %d",d);
        t = t-d;
		printf("\ntotel price: %d",t);
	}
	
	else{
	
		printf("\nYour amount is less than 1000 then \nYour totel price: %d",t);
	}
	return 0;
}