#include<stdio.h>
int age(int x)
{
    if(x>=18)
    {
        printf("%d age it is able to vote \n",x);
    }
    else
    {
        printf("%d age it is not able to vote",x);
    }
}

int main()
{
    age(20);
    age(17);
    return 0;
}