#include<stdio.h>
int main()
{
    int i,arr[5],sum=0;
    printf("Enter a array Element :");

    for( i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

 
    for(i=0;i<5;i++)
    {
        //int sum=0;
        sum=sum+arr[i];

    }
     printf("Sum of array :%d\n",sum);


    return 0;
}