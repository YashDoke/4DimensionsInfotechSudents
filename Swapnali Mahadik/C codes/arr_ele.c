#include<stdio.h>
int main()
{
    int arr[6];
    int rev_arr[6];

    printf("Enter a Array Element :");
    for(int i=0;i<6;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("store array element :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    int index=0;
    for(int i=5;i>=0;i--)
    {
      rev_arr[index]=arr[i];
      index++;
    }
    printf("\nReverse array :\n");
    for(int j=0;j<6;j++)
    {
        printf("%d ",rev_arr[j]);
    }

    int index1=5;
    for(int i=5;i>=0;i--)
    {
      if(rev_arr[index1]==arr[i])
      {
        printf("same");
        
      }
    else
      {
        printf("not same");
        break;
      }
      index1--;
    }

    

    return 0;
    
}