#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter a first number :\n");
   scanf("%d",&a);
    printf("Enter a second number :\n");
    scanf("%d",&b);
    printf("Enter a third number :\n");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        printf("first number is large:%d",a);
    }
    if(b>=a && b>=c)
    {
        printf("second number is large: %d",b);

    }
    if(c>=a && c>=b)
    {
        printf("third number is large :%d",c);
    }

    return 0;
}