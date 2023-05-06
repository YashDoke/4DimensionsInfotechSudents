#include<stdio.h>
int main()
{
    int num1,num2,gcd,temp;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter a second number:");
    scanf("%d",&num2);
    if(num1<num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;

    }
    while(num2!=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    gcd=num1;
    printf("GCD gratest common divisor:%d",gcd);
    return 0;
}