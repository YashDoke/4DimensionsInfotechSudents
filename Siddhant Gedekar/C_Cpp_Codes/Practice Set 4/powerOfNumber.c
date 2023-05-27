#include<stdio.h>

int power(int a, int b){
    int temp=1;
    for(int i=0;i<b;i++){
        temp *= a;
    }
    return temp;
}

int main(){
    // Take number input
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("%d raised to power %d is: %d",num1,num2,power(num1,num2));

    return 0;
}