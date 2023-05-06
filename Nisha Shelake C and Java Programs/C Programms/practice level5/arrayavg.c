#include<stdio.h>
int main()
{
    int age[5];
    int i;
    int avg=0;
    int sum=0;
    printf("enter a array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&age[i]);
    }
    for(i=0;i<5;i++)
    {
        //printf("%d \n",age[i]);
        sum=sum+age[i];
        avg=sum*100;
        
    }
    printf("sum of array is:%d",sum);
    printf("avg of array is:%d",avg);
    return 0;
}