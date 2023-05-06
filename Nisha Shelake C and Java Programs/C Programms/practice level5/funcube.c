#include<stdio.h>
int cube(int num)
{
    int cube_num;
    cube_num=num*num*num;
    printf("cube of given number:%d\n",cube_num);
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    cube(num);
    return 0;
}