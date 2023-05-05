#include<stdio.h>
int Evenodd(int number)
{
    if(number%2==0)
    {
        printf("%d Even number\n",number);
    }
    else
    {
        printf("%d odd number",number);
    }
}

int main()
{
    Evenodd(2);
    Evenodd(3);
    return 0;
}