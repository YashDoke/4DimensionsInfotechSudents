#include<stdio.h>
int main()
{

    int num1,num2,i,j,highest=0;
    printf("enter a  first positive integer:");
    scanf("%d",&num1);
    printf("enter a  second positive integer:");
    scanf("%d",&num2);
    //printf("the prime factor of %d are:",num1);
    for(i=2;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            
            
            /*{
            printf("%d\n",i);
            }
            */
            highest=i;
          

        }
       // return 0;
    }
     printf("common highest number is:%d\n",highest);
     return 0;
}