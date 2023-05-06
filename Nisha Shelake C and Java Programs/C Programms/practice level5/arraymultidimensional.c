#include<stdio.h>
int main()
{
    int i,j,k;
    int age[2][3][4];
    printf("enter three dimensional array:\n");
    {
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {

        for(k=0;k<4;k++)
        {
        scanf("%d",&age[i][j][k]);
        }
        // printf("\n");
        }
         printf("\n");
    }
    }
    printf("displaying a three dimensional array:\n");
    {
    for(i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {for(k=0;k<4;k++)
        {
        printf("%d ",age[i][j][k]);
        }
        // printf("\n");
        }
         printf("\n");
    }
    }
    
    return 0;
                    
}

