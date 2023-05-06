#include<stdio.h>
int main()
{
    int arr[6];
    int i,j;
    printf("enter a array:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf(" sorted Array is :");
     for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
       
    }
    printf("highest value is:%d\n",arr[5]);
    printf("second highest value is:%d\n",arr[4]);
    

    
   
    return 0;
}