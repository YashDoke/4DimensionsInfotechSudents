#include<stdio.h>
int main()
{
    int age[5];
    int i;
    int product=1;
    printf("enter a array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&age[i]);
    }
     for(i=0;i<5;i++)
    {
        product=product*age[i];
       // printf("product of :%d\n",product);
        //printf("%d",age[i]);
    }
     printf("product of  array is :%d\n",product);
    return 0;
    
}