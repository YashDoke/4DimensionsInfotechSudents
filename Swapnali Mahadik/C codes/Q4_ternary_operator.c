#include<stdio.h>
#include<string.h>
int main()
{
    int num1,num2,num3;
    printf("Enter a first number :");
    scanf("%d",&num1);
    printf("Enter a second number");
    scanf("%d",&num2);

    num3=(num1>num2 ? printf(" number is gretest"): printf("number is small"));
    return 0;
}