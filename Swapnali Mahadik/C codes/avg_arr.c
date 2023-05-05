#include<stdio.h>
int main()
{
    int marks,i,sum=0,avg,large,small,arr[5];

    printf("Enter a Array Element :");

    for(i=0;i<5;i++)
    {   
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    small=arr[0];
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];

        if(arr[i]>large)
        {
            large=arr[i];
        }

        if(arr[i]<small)
        {
            small=arr[i];
        }
       
        
    }
     avg=sum/5;
    printf("large :%d\n",large);
    printf("small :%d\n",small);
    printf("Sum :%d\n",sum);
    printf("avg :%d\n",avg);
    return 0;
}