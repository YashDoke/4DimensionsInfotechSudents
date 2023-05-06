#include<stdio.h>

int main()
{
    int discount, quantity;
    printf("Enter the discount value:\n");
    scanf("%d\n",&discount);
    scanf("%d\n",&quantity);

    if (10 > 1000)
    {
      printf("user will give discount of 10",discount);
    }

    else
    {
      printf("total cost for user is %d\n", quantity);
    }
    
    return 0;
}