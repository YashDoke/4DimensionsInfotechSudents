#include<stdio.h>
int main()
{
    int n,sum;
    float avg;
    sum=0;  
    printf("Enter a number :");
    scanf("%d",&n);

    while(n<=10)
    {
        printf(" %d\n",n);
       sum=sum+n; 
       avg= sum/10;
       printf("average value %f\n",avg);
        n++;
    }
   

    return 0;

}