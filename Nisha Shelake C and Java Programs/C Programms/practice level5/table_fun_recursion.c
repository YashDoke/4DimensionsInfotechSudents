#include<stdio.h>
int table(int n ,int i)
{

    if(i<=10)
    {
        printf("%d\n",i*n);
       
        table(n,i+1);
    }
     
}
int main()
{
    int i=1,n;
    printf("enter a number:");
    scanf("%d",&n);
    table(n,i);
    return 0;
}