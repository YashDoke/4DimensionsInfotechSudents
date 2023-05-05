#include<stdio.h>
int main()
{
    int quantity;
    float total_amount;
    printf("Enter a quantity :");
    scanf("%d",&quantity);

    if(quantity*100>1000)
    {
        total_amount=(quantity*100)-(10*(quantity*100)/100);

    }
    else
    {
        total_amount=(quantity*100);
    }
    
    printf("total amount of %f",total_amount);

    return 0;
}
