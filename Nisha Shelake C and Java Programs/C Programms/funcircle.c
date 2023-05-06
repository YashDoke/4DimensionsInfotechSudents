#include<stdio.h>
void circle(int r)
{
    printf("area is:%d\n",(3.14*r*r));
    printf("circumference is:%d",2*(3.14*r*r));
}
int main()
{
    circle(4);
    
    return 0;
}