#include<stdio.h>

int main()
{
    int  a;
    int *b;
    b=&a;
    printf("Enter the Number \n");
    scanf("%d\n",&a);
    printf("%d\n",&*b);
    printf("%d\n",&b);
    return 0;
}