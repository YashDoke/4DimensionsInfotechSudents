#include<stdio.h>
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    int i, n;
    printf("enter a fibonacci series number :");
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
   // return ;
}