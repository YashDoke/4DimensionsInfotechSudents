#include<stdio.h>
int main()
{
    int i;
    int age [10];
    int negative=0;
    int positive=0;
    int zero=0;
    int odd=0;
    int even =0;
   
    printf("enter a array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&age[i]);
    }
   
    for(i=0;i<10;i++)
    {
        if(age[i]>0)
        {
        
           positive=positive+1;
        }
        else if (age [i]<0)
        {
       
           negative=negative+1;
        }
        else if(age[i]==0)
        {
            
            zero=zero+1;
        }
        else if(age[i]%2==0)
        {
            even=even+1;
        }
        else if(age[i]%2!=0)
        {
            odd=odd+1;
        }
    }
    printf("positive numbers are %d\n",positive);
    printf("negative numbers are %d\n",negative);
    printf("zero numbers are %d\n",zero);
    printf("even numbers are %d\n",even);
    printf("odd numbers are %d\n",odd);
    
    return 0;

}