#include<stdio.h>

// finding area and perimeter of circle

int main(){
    float pi = 3.1415926;
    float r;
    printf("Enter radius of Circle: ");
    scanf("%f",&r);
    printf("Perimeter of Circle: %f",(2*pi*r));
    printf("\nArea of Circle: %f", pi*r*r);
    return 0;
}