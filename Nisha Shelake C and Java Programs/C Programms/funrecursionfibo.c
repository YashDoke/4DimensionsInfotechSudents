#include<stdio.h>
int fibonacci(int num)
{
    if(num==0 || num==1)
    {
        return num;
    }
    return fibonacci(num-1)+fibonacci(num-2);
   
}
int count(int n)
{
    int i,sum,x=1,y=1;
    int total_call=0;
    //printf("%d %d ",x,y);
    for(i=1;i<n;i++)
    {
     sum= x+y+1;
    // printf("%d ",sum); //1 1 3 5 9 15 25 41
            total_call+=sum;
            x = y;
            y=sum;
    }
    printf("\n total function calls:%d",total_call+2);
    return 0;
}   


int main()
{
    int n,i;
    
    printf("enter a number to find a fibonacci:");
    scanf("%d",&n);
    printf("fibonaccie series:");
      for(i=0;i<n;i++)
      {
        printf("%d ",fibonacci(i));
      }
      printf("\n");
     // printf("count is:");
      count(n);
     
    return 0;
}