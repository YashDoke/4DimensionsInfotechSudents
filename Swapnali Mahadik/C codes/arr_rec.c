#include<stdio.h>

int printArray(int arr[],int length,int index)
{
    if(length==index)
    {
        return 0;
    }
    printf("%d ",arr[index]);
    printArray(arr,length,index+1);
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(int);
    int index=0;
    printArray(arr,length,index);
    return 0;

}