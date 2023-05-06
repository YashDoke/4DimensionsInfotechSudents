#include<stdio.h>
int main()
{


    int arr1[5];
    printf("Enter numbers: ");
    for(int i=0;i<3;i++){
        scanf("%d",&arr1[i]);
    }

    printf("elements of array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}
