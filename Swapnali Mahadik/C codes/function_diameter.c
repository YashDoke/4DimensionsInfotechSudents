#include<stdio.h>
int diameter(int r)
{
    int Diameter;
    Diameter=r+r;
    printf("Diameter of circle :%d\n",Diameter);

}
int area(int r)
{
    
    int Area;
    Area=3.14*(r*r);
    printf("Area of circle :%d\n",Area);

}

int circumference(int r)
{
    int Circumfercence;
    Circumfercence=2*3.14*(r);
    printf("Circumference of circle :%d\n",Circumfercence);

}

int main()
{ 
    int r;
    printf("Enter a radius :");
    scanf("%d",&r);

    diameter(r);
    area(r);
    circumference(r);
    return 0;
}