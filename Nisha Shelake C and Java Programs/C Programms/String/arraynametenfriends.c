#include<stdio.h>
#include<string.h>
void main()
{
    char friends[10][20]={
        "nisha",
        "swapnali",
        "anuja",
        "bhakti",
        "manisha",
        "mayuri",
        "priyanka",
        "amruta",
        "shree",
        "nagesh",
    };
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(friends[i],friends[j])>0)
            {
                char temp[20];
                strcpy(temp,friends[i]);
                strcpy(friends[i],friends[j]);
                strcpy(friends[j],temp);
            }
        }
    }
    printf("sorted friends:\n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",friends[i]);
    }
}