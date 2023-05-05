#include<stdio.h>
int main()
{
    int num,i,j;

    printf("Enter table :");
    scanf("%d",&num);

   for(i=1;i<=10;i++)
   {
    printf("table :%d * %d = %d \n",num,i,num * i);
   }
    return 0;
}