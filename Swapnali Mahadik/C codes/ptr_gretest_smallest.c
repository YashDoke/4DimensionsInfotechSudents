#include<stdio.h>

int greatest_smallest(int first,int second,int third ,int *ptr1,int *ptr2,int *ptr3)
{
    ptr1=&first;
    ptr2=&second;
    ptr3=&third;
    if(*ptr1>*ptr2)
    {
        printf("first number is grestest");
    }
    
     else if(*ptr2>*ptr3)
    {
        printf("second number is grestest");
    }
    
     else if(*ptr3>*ptr1)
    {
        printf("third number is grestest");
    }
    else
    {
        printf(" number smallest");
    }
}
int main()
{
    int first,second,third ;
    int *ptr1,*ptr2,*ptr3;

    printf("Enter a first number :");
    scanf("%d",&first);
    printf("Enter a second number :");
    scanf("%d",&second);
    printf("Enter a third number :");
    scanf("%d",&third);

    greatest_smallest(first,second,third,ptr1,ptr2,ptr3);
    return 0;
}