#include<stdio.h>
int main()
{
    int salary,year;
    printf("Enter a salary :");
    scanf("%d",&salary);
    printf("Enter a year :");
    scanf("%d",&year);

    if(year>5)
    {
        printf("Give the bonus");
        salary*5/100;

    }
    else
    {
        printf("Not give the bonus");
    }

    

    return 0;
}