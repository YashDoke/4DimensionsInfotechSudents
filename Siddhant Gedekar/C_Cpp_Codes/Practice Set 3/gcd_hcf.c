#include<stdio.h>

int main(){
    int num1, num2, gcd=0;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    if(num1>num2){
        for(int i=2; i<=num1; i++){
            if(num1%i==0 && num2%i==0){
                gcd = i;
            }
        }
    }
    if(num2>num1){
        for(int i=2; i<=num2; i++){
            if(num1%i==0 && num2%i==0){
                gcd = i;
            }
        }
    }
    printf("GCD is: %d",gcd);
    return 0;
}