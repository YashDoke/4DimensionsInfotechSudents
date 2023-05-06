#include<stdio.h>

int main()
{
    int length, breadth;
    int area, perimeter;
    scanf("%d",&length);
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Length of rectangle is:%d\n", area );
    printf("Breadth of rectangle is:%d\n",area);

    perimeter=2*(length+breadth);
    printf("length of  rectangle  is:%d\n",perimeter);
    printf(" breadth of  rectangle  is:%d\n", perimeter);
     
    

    return 0;

}