#include<stdio.h>
int main()
{
    int grade,marks;
    printf("Enter a marks :");
    scanf("%d",&marks);
    if(marks<25)
    {
        printf("Grade is F \n");
    }
    else if(marks>=25 && marks<45)
    {
        printf("Grade is E");
    }
    else if(marks>=45 && marks<50)
    {
        printf("Grade is D");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade is c");
    }
    else if(marks>=60 && marks<80)
    {
        printf("Grade is B");
    }
    else if(marks>=80 )
    {
        printf("Grade is D");
    }
    else
    {
        printf(" Grade is A");
    }
    
    return 0;
}