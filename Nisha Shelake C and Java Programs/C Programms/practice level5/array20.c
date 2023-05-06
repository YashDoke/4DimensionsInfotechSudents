#include<stdio.h>
int positive()
{   
    for(i=o;i<20;i++)
    if(arr[i]>0)
    {
        printf(" number is positive %d",aar[i]);
    }

}
int negative()
{
    for(i=0;i<20;i++)
    if(arr[i]<0)
    {
        printf("number is negative %d",arr[i]);
    }
}
int oddeven()
{   
    for(i=0;i<20;i++)
    if(arr[i]%2==0)
    {
        printf("number is even %d",arr[i]);
    }
    else
    {
        printf("number is odd %d ",arr[i]);
    }
}
int zero()
{   
    for(i=0;i<20;i++)
    if(arr[i]==0)
    {
        printf("number is zero %d",arr[i]);
    }
}
int main()
{   
    int arr[20];
    int i;
    printf(" enter a 20 integer numbers \n");
    //scanf("%d",&arr[i]);
    for(i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    positive();
    negative();
    zero();
    oddeven();
    return 0;
}