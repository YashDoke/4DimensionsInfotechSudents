#include<stdio.h>
int perfect(int number)
{
    int sum=0;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
            // printf("%d\n",sum);
        }
        
    }
        if(sum==number)
        {
            printf("%d number is perfect number",number);
        }
        else
        {
            printf("%d number is not perfect number",number);
        }
        
}

int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d ",&number);


 perfect(number);
    return 0;
}