#include<stdio.h>
int fibonacci(int num)
{
    if(num==0 || num==1)
    {
        return num;
    }
    return fibonacci(num-1)+fibonacci(num-2);
   
}
int main()
{
    int num,i;
    int count=0;
    printf("enter a number to find a fibonacci:");
    scanf("%d",&num);
    printf("fibonaccie series:");
      for(i=0;i<num;i++)
      {
        printf("%d",fibonacci(i));
      }
    return 0;
}