#include<stdio.h>
int main()
{
    int age1,age2,age3;
    printf("Enter a age in one person :");
    scanf("%d",&age1);
    printf("Enter a age in two person :");
    scanf("%d",&age2);
    printf("Enter a age in three person :");
    scanf("%d",&age3);

    if(age1>age2 && age1>age3)
    {
        printf("person one is oldest\n");
    }
    else
    {
        printf("person one is younger\n");
    }
     if(age2>age1 && age2>age3)
    {
        printf("person two is oldest\n");
    }
    else
    {
         printf("person three is younger\n");
    }
    if(age3>age1 && age3<age2)
    {
        printf("person three is oldest\n");
    }
    else
    {
        printf("display age");
    }
   

    return 0;
}