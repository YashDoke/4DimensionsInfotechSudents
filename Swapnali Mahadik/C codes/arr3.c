#include<stdio.h>
int main()
{
    int i, arr[10] ,pos[10],neg[10],even[10],odd[10],zero[10];
    int positive=0;
    int negitive=0;
    int zeros=0;
    

    printf("Enter a array element :");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("positive number are : ");
    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            printf(" positive of %d",pos[i]=arr[i]);
            positive=positive+1;
        }
        else if(arr[i]<0)
        {
            printf(" negitive of %d",neg[i]=arr[i]);
            negitive=negitive+1;
        }
       
    //    else if(arr[i]%2==0)
    //    {
    //         printf("Even %d",even[i]=arr[i]);

    //    }
    //    else if(arr[i]%2!=0)
    //    {
    //     printf("odd %d",odd[i]=arr[i]);
    //    }
       else if(arr[i]==0)
       {
        printf(" Zero %d",zero[i]=arr[i]);
         zeros=zeros+1;
       }
       printf("\n");

       
    }
       printf("Number of positive :%d\n",positive);
       printf("Number of negitive :%d\n",negitive);
    //    printf("Number of even :%d\n",even);
    //    printf("Number of odd :%d\n",odd);
       printf("Number of zeros :%d\n",zeros);
    
    return 0;
}