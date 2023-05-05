#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter a rows :");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for( j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}