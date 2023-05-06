#include<stdio.h>
int prime(int num)
{   
    int i,j;
    int isprime;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            isprime=1;
            //if (isprime)
            for(j=2;j<=num/2;j++)
            {
                if(num%j==0)
                
            {
                printf("given number is prime number:%d\n",i);
            }
            }
            else
            {
                printf("given number is not prime number:%d\n",i);
            }
        
        
    }    
          
}

int main()
{
    int i,num;
    printf("enter a number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}