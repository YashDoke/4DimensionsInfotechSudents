#include<stdio.h>
int main()
{
    int i,j,rows,space;
    printf("Entar a rows");
    scanf("%d",&rows);
    space=rows-1;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<space;j++)
        {
         printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
    
        printf("\n");
        space--;
    }
    space=0;
    for(i=rows-1;i>=0;i--)
    {
        for(j=0;j<=space;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
        space++;
    }

    return 0;

}