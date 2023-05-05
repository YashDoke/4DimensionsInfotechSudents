#include<stdio.h>
int main()
{
    int num1,num2,gcd,temp;

    printf("Enter a Num1 :");
    scanf("%d",&num1);
    printf("Enter a Num2 :");
    scanf("%d",&num2);

    if(num1<num2)  //num1=20 ,num2=24
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }//num1=24,num2=20

    while(num2 !=0)
    {
        temp=num1 %num2;
        num1=num2;  //num=20,4
        num2=temp;  //4,0
    }
    gcd=num1;//4

    printf("GCD is: %d",gcd);

    return 0;
}