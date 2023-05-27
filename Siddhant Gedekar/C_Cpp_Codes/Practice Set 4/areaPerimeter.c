#include<stdio.h>

float rectangleInfo(float length, float breadth){
    printf("Perimeter of Rectangle: %.2f\n",(2*(length+breadth)));
    return length*breadth;
}

int main(){
    float length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f",&length,&breadth);

    float area = rectangleInfo(length, breadth);
    printf("Area of Rectangle is: %.2f\n",area);
    return 0;
}