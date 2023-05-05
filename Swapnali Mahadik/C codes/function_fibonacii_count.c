#include<stdio.h>
int main()
{
    int i ,n,x=1,y=1,sum;
    printf("Enter a number :");
    scanf("%d",&n);
    

printf("%d %d ",x,y);
for(i=1;i<n;i++)
    {
        sum=x+y+1;
        printf("%d ",sum);
        x=y;
        y=sum;
    }

    return 0;
}