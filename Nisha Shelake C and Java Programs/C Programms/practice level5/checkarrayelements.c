#include<stdio.h>
int main()
{
    int arr[]={2,3,15,15,3,2};
    int i,j;
    for(i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
     for(i=5;i<=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}