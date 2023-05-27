#include<stdio.h>

int main(){
    printf("Enter Two numbers: ");
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("Number %d is greater than %d.\n",num1,num2);
    }
    if(num2>num1){
        printf("Number %d is greater than %d.\n",num2,num1);
    }
    if(num1==num2){
        printf("Both are equal.");
    }
    return 0;
}