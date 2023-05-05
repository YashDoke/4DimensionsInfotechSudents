#include<stdio.h>
int main()
{
    
    int i,j, number,isprime=0;
    printf("Enter a positive Integer :");
    scanf("%d",&number);

    printf("Enter a prime factor of %d\n",number);

    for(i=2;i<=number;i++)
    {
        
       // if(number%1==0) Find prime number
        if(number%i==0)
        {
            isprime=1;

            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    break;
                }
            }
            if(isprime)
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}