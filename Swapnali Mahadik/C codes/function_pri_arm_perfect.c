#include<stdio.h>
int prime(int n)
{
    int i,isprime;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
           isprime=1;
           for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    printf(" Not prime number ");   
                    break;
                }
                if(isprime);
                {
                    printf("prime number%d",i);
                }
            }
        }
    }
    return n;
}
// int aramstrong(int n)
// {

// }
// int perfect(int n)
// {

// }
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    prime(n);
    
    return 0;

}