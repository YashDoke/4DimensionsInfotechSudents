#include<stdio.h>

int area(int length, int breadth)
{
    int area;
    area = length*breadth;
    printf("%d\n area of rectangle:",area);
    return  0;

}

int perimeter(int length1, int breadth1)
{
    int perimeter;
    perimeter=2*(length1+breadth1);
    printf("%d\n perimeter of recangle:",perimeter);
    return   0;
}
int main()
{
     int a,b;
     printf("Enter length of rectangle:");
     scanf("%d\n",&a);

     printf("Enter breadth of rectangle:");
     scanf("%d\n",&b);

     area(a,b);  //calling function area
     perimeter(a,b);  //calling function perimeter
      
      
    return 0;
}