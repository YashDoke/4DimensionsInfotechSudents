#include<stdio.h>
int oddeven(int num)
{
    if(num%2==0)
    {
        printf("given number is even:%d",num);
    }
    else
    {
        printf("given number is odd number:%d",num);
    }
}
int main()
{
    int num ;
    printf("enter a number :");
    scanf("%d",&num);
    oddeven(num);
    return 0;
}