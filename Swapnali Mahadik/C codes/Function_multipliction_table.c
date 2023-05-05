#include<stdio.h>
int table(int number)
{
    int i,new_number;
    for(int i=1;i<=10;i++)
    {
        new_number= number*i;
        printf("%d\n",new_number);   
    }

    return 0;
   
}
int main()
{
    // int number;
    // printf("Enter a number :");
    // scanf("%d ",&number);
    // //table(new_number);
    table(12);
    return 0;
}