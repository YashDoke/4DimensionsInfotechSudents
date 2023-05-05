#include<stdio.h>
int main()
{
    int num ,n;
    printf("Enter a number :");
    scanf("%d",&num);

    n=abs(num);
    printf("absolute value %d is %d :",n,num);
    return 0;
}