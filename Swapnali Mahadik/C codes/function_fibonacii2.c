#include<stdio.h>
int fibonacii(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return fibonacii(n-1)+fibonacii(n-2);
}

int count(int n)
{
    int i, x=1,y=1,sum;
    for(i=1;i<n;i++)
    {
        sum=x+y+1;
        printf(" %d ",sum);

        x=y;
        y=sum;

        printf("count of fibonacii :");
    }
}

int main()
{
    int i,n;
    printf("Enter a Fibonacii number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacii(i));
    }
    int count(n);
    return 0;
}

