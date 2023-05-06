#include<stdio.h>
int main()
{
    int radius,area,circumference;
    printf("enter a radius of circle:");
    scanf("%d",&radius);
    int circle(int radius);
    {
        area=3.14*radius;
        circumference=2*3.14*radius*radius;

    }
    printf("area of circle is:%d\n",area);
    printf("circumference of circle is:%d",circumference);
    return 0;
}