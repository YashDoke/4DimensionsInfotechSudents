#include<stdio.h>
    int circle(int r)
    {
       printf("area of circle %d\n",3.14*(r*r));
        printf("circumference of circle %d",2*3.14*r);
    }
    
int main()
{
    circle(2);
    return 0;
}