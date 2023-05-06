#include<stdio.h>

int main()
{
   int num,sum=0;
   printf("Enter 10 Integers:");

    for(int i=1;i<=10;i++)
    {
         scanf("%d",&num);
        sum=sum+num;
    }
    printf("\n sum is :%d",sum);
    

    return 0;
}