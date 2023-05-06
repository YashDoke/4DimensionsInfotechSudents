#include<stdio.h>

int main()
{
    int a;
    int *x;
    printf("Enter the value:\n");
    scanf("%d",&a);
    x=&a;
    printf("address is:%d\n",x);
   printf("value is :%d\n",*x);
    return 0;
}