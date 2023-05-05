#include<stdio.h>
int main()
{
    int number,orignalNumber,remainder,result;

    for(number=100;number<=500;number++)
    {
        orignalNumber=number;
        result=0;

        while(orignalNumber!=0)
        {
            remainder=orignalNumber%10;
            result=result+remainder*remainder*remainder;
            orignalNumber= orignalNumber/10;
        }
    
        if(result==number)
        {
             printf("aramstrong number %d\n",number);
        }
    }
    return 0;
}