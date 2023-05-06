#include<stdio.h>
int main()
{
    int n[10];
    int i;
    int num;
    printf(" enter a 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    printf(" enter a number whose number is present in array \n ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
    if(n[i]==num)
    {
        printf("number is present in this array %d\n ",num);
    }
    }
    printf(" no is not presesnt in this array%d",num);
    
    return 0;
}    

