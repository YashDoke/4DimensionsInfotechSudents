#include<stdio.h>
int main()
{
    int n[10];
    int i;
    printf(" enter a 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}