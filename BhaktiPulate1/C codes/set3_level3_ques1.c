#include<stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter the number:\n");
     
    

    for(int i=0; i<10;i++)
    {
        scanf("%d\n",&num);
        sum=sum+num;
    }
    printf("Sum of digits of number is %d /n",sum);
    return 0;
}