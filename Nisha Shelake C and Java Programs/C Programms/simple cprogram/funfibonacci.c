#include<stdio.h>

int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+fib(x-2);

    }
}
int main()
{
    printf("%d ",fib(0)); //0
    printf("%d ",fib(1));  //1
    printf("%d ",fib(2)); // 1
    printf("%d ",fib(3)); //
    printf("%d ",fib(4));
    return 0;
}