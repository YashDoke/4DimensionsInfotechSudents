#include<stdio.h>
int power(int a,int b)
{
    int i,product=1;
    for(i=1;i<=b;i++)
    {
        product=product*a;
    }
        return product;
    }
    int main()
    {
        printf("%d\n",power(4,5));
    return 0;
}