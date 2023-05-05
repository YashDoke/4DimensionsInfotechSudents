#include<stdio.h>
int main()
{
    int highest,sec_highest;
    int arr[6];

    printf("Enter a Array Element :");

    for(int i=0;i<6;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("Store array value :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    
printf("\nHighest number of array :");
    for(int i=1;i<6;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);
    
    return 0;
}