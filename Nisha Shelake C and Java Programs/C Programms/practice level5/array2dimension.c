#include<stdio.h>
int main()
{
    int i,j;
    int age[2][3]={{1,2,3},
                    {4,5,6}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d",age[i] [j]);
        }
         printf("\n");
    }
    
    return 0;
                    
}