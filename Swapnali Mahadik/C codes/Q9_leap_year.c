#include<stdio.h>
#include<string.h>
int main()
{

int year;
printf("Enter a year :");
scanf("%d",&year);

if(year % 4==0)
{
    printf("year is leap year :%d\n",year);
}
else
{
    printf("Year is not leap year");
}
    return 0;
}