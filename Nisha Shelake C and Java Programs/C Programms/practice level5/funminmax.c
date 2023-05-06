#include<stdio.h>
int minmax(int n)
{
    int num1,num2;

    if(num1>num2)
    {
        printf(" number 1 is greatest\n  ");
    }
    else
    {
        printf("number 1 is smallest number\n");
    }
     if(num1<num2)
    
    {
        printf("number 2  is greatest\n");

    }
    else
    {
        printf("number 2 is smallest\n ");
    }
    

}
int main()
{   int n ,num1,num2;
    printf("enter a first number:");
    scanf("%d",&num1);
    printf("enter a second number:");
     scanf("%d",&num2);
    minmax( n );
    return 0;
}