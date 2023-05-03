#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter the Number:");
	scanf("%d",num);
    if(num>=0){
        printf("%d",num);
    }
	else{
		num = num*(-1);
		printf("Abslute value: %d",num);
	}
	
	return 0;
}