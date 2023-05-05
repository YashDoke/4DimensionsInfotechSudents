#include<stdio.h>
int main()
{
    int i,arr[5],product=1;

    printf("Enter a Array Element :");

    for(i=0;i<5;i++)
    {
        scanf("%d\n",&arr[i]);

    }

    for(i=0;i<5;i++)
    {
        product=product*arr[i];
    }
    printf("Product of array :%d\n",product);
    return 0;
}
