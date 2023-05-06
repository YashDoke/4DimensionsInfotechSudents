#include<stdio.h>

int main()
{
    int x1 , x2 , x3;
    int *ptr1 , *ptr2 ,*ptr3;
    
    printf("Enter the first number:\n");
    scanf("%d",&x1);
    printf("Enter the second number:\n");
    scanf("%d",&x2);
    printf("Enter the third number:\n");
    scanf("%d",&x3);

    ptr1=&x1;
    ptr2=&x2;
    ptr3=&x3;

    if (*ptr1>*ptr2 && *ptr1>*ptr3)
    {
         printf("First number is the greatest :%d\n",*ptr1);
    }
    else if (*ptr2>*ptr1 && *ptr2 > *ptr3)
    {
        printf("Second number is the greatest :%d\n",*ptr2);
    }
     else
    {
        printf("Third number is the greatest:%d\n",*ptr3);
    }
         
         
     if ( *ptr1<*ptr2 && *ptr1<*ptr3)
     {
        printf("First number is the smallest:%d\n",*ptr1);
     }
     else if ( *ptr2<*ptr1 && *ptr2<*ptr3)
     {
        printf("Second number is the smallest:%d\n",*ptr2);
     }
     else
     {
        printf("Third number is the smallest:%d\n",*ptr3);
     }
     
        

        
        



    return 0;
}