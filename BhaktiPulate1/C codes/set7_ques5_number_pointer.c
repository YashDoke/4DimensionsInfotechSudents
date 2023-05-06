#include<stdio.h>

int main()
{
    int x;
    int *ptr;
    printf("Enter the number:\n");
    scanf("%d",&x);
    ptr=&x;
    printf("Value is %d\n",*ptr);
    return 0;
}