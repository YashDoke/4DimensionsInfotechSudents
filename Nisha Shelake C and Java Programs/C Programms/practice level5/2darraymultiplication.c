#include<stdio.h>
int main()
{
    int arr[5][5];
    int i,j;
    int product=1;
    printf("enter a array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i],&arr[j]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i],arr[j]);
    }
}