#include<stdio.h>
int main()
{
    int number,i,j,isPrime;
    printf("enter a positive integer:");
    scanf("%d",&number);
    //printf("the prime factor of %d are:",number);
    for(i=2;i<=number;i++)
    {
        if(number%i==0)
        {
             isPrime=1;
             for(j=2;j<number;j++)
             {
                if(number%j==0)
                {
                    isPrime=0;
                    break;
                }
             }
             if(isPrime)
             {
                printf("%d",i);
             }
             
        }


        
    }
    

    return 0;

}