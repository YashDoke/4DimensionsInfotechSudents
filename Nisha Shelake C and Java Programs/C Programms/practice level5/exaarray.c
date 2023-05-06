#include <stdio.h>
int main()
{
    int i, j, num;
    int age[3];
    int status = 0;
    printf("enter a array:\n");
    for (i = 0; i<3; i++)
    {
        scanf("%d ",&age[i]);
    }
    // printf("enter a number for checking:\n");

    // scanf("%d",&num);
    // for (i = 0; i < 3; i++)
    // {
    //     if (num == age[i])
    //     {
    //         status = 1;
    //         printf(" given number %d is presented in this array:", num);
    //     }
    // }
    // if (status == 0)
    // {
    //     printf("number  %d is not present in this array:", num);
    // }
    

    return 0;
}
