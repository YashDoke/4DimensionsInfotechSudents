#include<stdio.h>

int main(){

    int num1, num2;
    int temp;

    printf("Enetr the First No.:");
    scanf("%d",&num1);

    printf("Enetr the Second No. : ");
    scanf("%d",&num2);

    int *num1Ptr = &num1;

    int *num2Ptr = &num2;

    temp = *num1Ptr;
    *num1Ptr = *num2Ptr;
    *num2Ptr = temp;

    printf("Reverse NUmber:\nFirst: %d \nSecond: %d",*num1Ptr,*num2Ptr);




    return 0;
}