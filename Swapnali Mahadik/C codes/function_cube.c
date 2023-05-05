#include<stdio.h>
int cube(int number)
{
   
    int cube_num;

        cube_num= number*number*number;
        printf("cube is : %d",cube_num);
    
}

int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d ",&number);

    cube(number);
    return 0;
}