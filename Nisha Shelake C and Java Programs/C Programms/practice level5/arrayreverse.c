#include<stdio.h>
int main()
{
    int age[10] ,age1[10];
    int i,j;
   // int index=0;
    printf("enter a array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d ",&age[i]);
    }
     int index=0;
    for(i=9;i>=0;i--)
    {
       // printf("%d ",age1[i]);
       age1[index] = age[i];
       index++;
    }
    for(int j=0;j<10;j++)
    {
        printf("%d ",age1[j]);
    }
    return 0;
}