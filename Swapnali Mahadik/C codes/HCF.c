#include<stdio.h>
int main()
{
    int num1,num2,i,highest=0;
    printf("Enter a number 1 :");
    scanf("%d",&num1);
    printf("Enter a number 2 :");
    scanf("%d",&num2);

for(i=2;i<=num1;i++)
{
    
       if(num1%i==0 && num2%i==0)
       {
        printf("%d ",i);
        highest=i;
       }
    
}
printf("\ncomman factor: %d ",highest,i);
    return 0;
}