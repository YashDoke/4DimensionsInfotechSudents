#include<stdio.h>
int main()
{
    while(1)
    {
    int number, orignalNumber,remainder,result=0;

    printf("Enter a three digit number :");
    scanf("%d",&number);

    orignalNumber=number;
    

    while(orignalNumber!=0)
    {
        remainder=orignalNumber%10;
        result=result+remainder*remainder*remainder;
        orignalNumber= orignalNumber/10;
    }
    if(result==number)
    {
        printf("is a armstrong number \n",number);

    }
    else
    {
        printf("is not a aramstrong number \n");
    }
    }
    return 0;
}