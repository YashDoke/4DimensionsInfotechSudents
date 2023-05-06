#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even:%d",num);
    }
    else{
        printf("given number id odd:%d",num);
    }
    return 0;
}