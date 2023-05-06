#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter values:\n");
    scanf("%d",&x);
    scanf("%d",&y);

     
printf("Store value:\n");
    printf("x:%d\n",x);
    printf("y: %d\n",y);

    
    int temp=x;
    x=y;
    y=temp;

printf("Exchange value :\n");
printf("x:%d\n",x);
    printf("y: %d\n",y);

    return 0;
}