#include<stdio.h>

float circleInfo(float radius){
    printf("Area of circle is: %.2f\n",3.1415926*radius*radius);
    return 2*3.1415926*radius;
}

int main(){
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    float circle = circleInfo(radius);
    printf("Perimeter of circle is: %.2f\n",circle);
    return 0;
}