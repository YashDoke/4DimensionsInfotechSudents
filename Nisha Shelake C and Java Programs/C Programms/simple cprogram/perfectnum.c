#include<stdio.h>

//int main()
int perfect(int n)
{
    int sum=0,i=1;
    // printf("enter a number :");
    //scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is a not perfect number",n);
    }
    return 0;
}
int main()
{   int n;
    printf("enter a number :");
    scanf("%d",&n);
    perfect(n);
}

