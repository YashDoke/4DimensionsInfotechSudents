#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    switch (num)
    {
    case 11:
        printf("It is area of circle");
        break;

    case 22:
        printf("It is area of rectangle");
        break;

    case 33:
        printf("Ti is area of square");
        break;

    case 44:
        printf("It is area of triangle");
        break;
    
    default:
        printf("Invalid number");
        break;
    }


    return 0;
}