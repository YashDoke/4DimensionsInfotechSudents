#include<stdio.h>
int main()
{   
    int arr1[10];
    int arr2[5];
    int arr3[5];
    int i,j;
    printf("enter a array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int len=sizeof(arr1)/sizeof(int);
    for(i=0;i<len;i++)
    {
        if(i<len/2)
        {
            arr2[i]=arr1[i];
        }
        else if(i>=len/2)
        {
            arr3[j]=arr1[i];
            j++;
        }
    }
    printf("original array:");
    for(i=0;i<len;i++)
    {
       printf("%d ",arr1[i]); 
    }
    printf("first array:\n");
    for(i=0;i<5;i++)
    {
        printf(" %d ",arr2[i]);
    }
    printf("second array:\n");
    for(i=0;i<5 ;i++)
    {
        printf("%d ",arr3[i]);
    }
   
    return 0;
}