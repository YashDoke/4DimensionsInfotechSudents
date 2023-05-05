#include<stdio.h>
int main()
{
   int age[2][3];

    printf("Enter a array :");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&age[i][j]);
        }
        
    }
    printf("Diaplay array :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",age[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}