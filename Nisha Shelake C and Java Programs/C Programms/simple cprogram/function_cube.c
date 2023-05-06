#include<stdio.h>

int cube(int number)
{
    //int number,
    int cube_fun;
    cube_fun=number*number*number;
    printf("cube is:%d  :",cube_fun);
}
int main()
{ 
    int number;
    printf("Enter a number :");
    scanf("%d ",&number);
    cube(number);
    return 0;
}