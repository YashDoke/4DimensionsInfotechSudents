#include<stdio.h>
int main()
{
    int age[5];
    int i;
    int sum =0;
    printf("enter a array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&age[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d \n",age[i]);
        sum=sum+age[i];
        //printf("%d",sum);
    }
    printf(" sum of array is: %d",sum);
    return 0;
}