#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    int num;
    int large;
    int second;
    printf("enter a postive numbers:\n");
    for(i=0;i<10;i++)
    {   
        if(arr[i]>0)
        {
         scanf("%d",&arr[i]);
        }
        else
        {
            printf("please enter a valid number:\n");
        }
    }
    large=arr[0];
    second=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>large)
        {
            large =arr[i];
        }
    }
    printf("largest no is %d \n",large);
    for(i=0;i<10;i++)
    {
        if(arr[i]<large)
        {
            
        }
       // printf("second hihest value is:%d\n",second);
    }
     printf("second hihest value is:%d\n",second);
    return 0;
}