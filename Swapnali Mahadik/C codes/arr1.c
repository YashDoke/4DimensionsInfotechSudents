#include<stdio.h>
int main()
{
    int values[5];
    printf("Enter a size of array :");
    for(int i=0;i<3;++i)
    {
        scanf("%d",&values[i]);

    }
    printf("display value :\n");
    for(int i=0;i<5;++i)
    {
        printf("%d\n",values[i]);
    }

    return 0;
}