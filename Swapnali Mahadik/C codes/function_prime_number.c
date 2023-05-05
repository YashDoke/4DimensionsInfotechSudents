#include<stdio.h>
int prime(int number)
{
    for(int i=2;i<=number;i++)
    {
        if(number%1==0)
        {
            int isprime=1;
               
            for(int j=2;j<=i/2;j++)
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
}
int main()
{
    prime(20);
    return 0;
}