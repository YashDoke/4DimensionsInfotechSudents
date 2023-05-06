#include<stdio.h>
int main()
{
    int number,i,j,isPrime;
    printf("enter a positive integer:");
    scanf("%d",&number);
    printf("the prime factor of %d are:",number);
    for(i=2;i<=number;i++)
    {
        if(number%i==0)
        {
             isPrime=1;
             for(j=2;j<=i/2;j++)
             {
                if(i%j==0)
                {
                    isPrime=0;
                    break;
                }
             }
             if(isPrime)
             {
                printf("%d\n",i);
               // int sum=sum+i;
                //printf("%d\n",sum);
             }
        }
    }
    return 0;
}   