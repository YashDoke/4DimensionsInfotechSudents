#include<stdio.h>
#include<string.h>
int main()
{
    int a=20;
    double b=30;
    float c=20.9;
    long int d=40;
    printf("size of integer :%d\n",sizeof(a));
    printf("integer :%d\n",a);

    printf("size of double :%d\n",sizeof(b));
    printf("double :%i \n",b);

    printf("size of Float :%d\n",sizeof(c));
    printf("Float %f\n",c);

    printf("size of long :%d\n",sizeof(d));
    printf("long int :%if",d);


    return 0;
}