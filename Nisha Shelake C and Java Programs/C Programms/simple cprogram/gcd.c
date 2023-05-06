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
            if(isPrime)
            {
            printf("%d\n",i);
            }
        }
       // return 0;
    }
     return 0;
}