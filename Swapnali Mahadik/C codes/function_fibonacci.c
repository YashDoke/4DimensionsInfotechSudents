#include<stdio.h>
int fibonacci(int x)
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
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main()
{
    printf("%d\n",fibonacci(0));
    printf("%d\n",fibonacci(1));
    printf("%d\n",fibonacci(2));
    printf("%d\n",fibonacci(3));
    printf("%d\n",fibonacci(4));
    printf("%d\n",fibonacci(5));
    return 0;
}