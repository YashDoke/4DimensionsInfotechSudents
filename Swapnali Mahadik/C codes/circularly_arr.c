#include<stdio.h>
int main()
{
    int arr[5],i,arr1[5];

    printf("Enter a array element :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("store array element :");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("store circularly array :");
    

    int temp=arr[0];

     arr1[0]=arr[4];

     arr1[1]=temp;

     arr1[2]=arr[1];

     arr1[3]=arr[2];
     arr1[4]=arr[3];

    printf("%d",arr1[0]);
    printf("%d",arr1[1]);
    printf("%d",arr1[2]);
    printf("%d",arr1[3]);
    printf("%d",arr1[4]);

    return 0;
}