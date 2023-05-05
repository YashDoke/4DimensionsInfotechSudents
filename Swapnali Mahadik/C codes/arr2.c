#include<stdio.h>
int main()
{
    int age[10], number,i;

    printf("Enter a number :");

    for(i=0;i<10;i++)
    {
        scanf("%d",&age[i]);

    }
    printf("Enter a number to check array :");
    scanf("%d",&number);

    int status=0;
    for( i=0;i<10;i++)
    {
        if(number==age[i])
        {
            printf("given number %d is present in array :",number);

            status=1;
        }
        // else
        // {
        //     printf("Given number %d is not present in array :",number);
        // }
    
    }
    if(status==0)
    {
         printf("Given number %d is not present in array :",number);   
    }

    return 0;

}