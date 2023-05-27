#include<stdio.h>

int main(){
    printf("Enter quantity: ");
    int quantity,cost=100;
    float total, disc = 0.10;
    scanf("%d",&quantity);
    total = cost*quantity;
    if(quantity>1000){
        printf("You get 10%% discount on %.2f, and the cost is: %.2f",total,total-(total*0.1));
    }
    else{
        printf("You are not eligible for the Discount.");
    }
    return 0;
}