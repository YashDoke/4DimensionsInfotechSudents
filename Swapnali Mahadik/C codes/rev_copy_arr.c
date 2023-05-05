#include<stdio.h>
int main()
{
    int i,j;
    int arr[10];
    int rev_arr[10];
    printf("Enter a 10 Integer Array :");
   

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("store value of array:\n");
    for(i=0;i<10;i++)
    {
         printf("%d ",arr[i]);
        
    }
    int index=0;
    printf("\nReverse value of array:\n");
    for (int i=9;i>=0;i--)
    {
        rev_arr[index]=arr[i];
        index++;
     
    //printf("Reverse value of array:");
    // printf("%d ",rev_arr[j]);
    }

    for( j=0;j<10;j++)
    {
        printf("%d ",rev_arr[j]);
    }
        

    

    return 0;
}