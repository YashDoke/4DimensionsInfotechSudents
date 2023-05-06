#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is a positive number: ",num);

    }
    if(num<0)
    {
        printf("%d is a negative number:",num);
    }
    if(num==0)
    {
        printf("%d is a zero number:",num);
    } 
    return 0;
}