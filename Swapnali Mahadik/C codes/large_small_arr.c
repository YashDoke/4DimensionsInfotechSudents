#include<stdio.h>
int main()
{
    int i,num, arr[5],large,small;

    printf("Enter a Array Element :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    small=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>large)
        {
        large=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
       

    }
    printf("Large element :%d\n",large);
     printf("Small value :%d\n",small);
    
    return 0;
}