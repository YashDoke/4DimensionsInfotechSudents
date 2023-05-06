#include<stdio.h>
int circle_area(int r)
{   int area;
    area=3.14*r*r;
    printf("area of circle is:%d\n",area);
}
int circle_circumference(int r)
{   
    int circumference;
    circumference=2*3.14*r*r;
    printf("circumference of circle is:%d\n",circumference);
}
int circle_diameter(int r)
{   int diameter;
    diameter=r+r;
    printf("diameter of circle is:%d\n",diameter);
}
int main()
{
    int r;
    printf("enter a radius of circle :");
    scanf("%d",&r);
    circle_area(r);
    circle_circumference(r);
    circle_diameter(r);
    return 0;


}