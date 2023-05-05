#include<stdio.h>

int min_max()
{
    int a,b;

    if(a>b) 
    {
        printf("number is maximum \n");
    }
    else
    {
        printf("number is minimum\n");
    }
    if(a<b)
    {
        printf("number is maximum\n");
    }
    else
    {
        printf("number is minimum\n");
    }
}

int main()
{
    int n ,a,b;
    printf("Enter a first number :");
    scanf("%d",&a);
    printf("Enter a second number :");
    scanf("%d",&b);

    min_max();

    return 0;
}