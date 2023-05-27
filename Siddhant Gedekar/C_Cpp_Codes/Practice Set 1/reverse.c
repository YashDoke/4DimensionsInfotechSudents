#include<stdio.h>

// reversing a number

int main(){
    int number,res=0;
    printf("Enter 3 digit number: ");
    scanf("%d",&number);

    res = number%10*10;
    number/=10;

    res = (number%10+res)*10;
    number/=10;

    res = (number%10+res);
    printf("Result: %d",res);

    return 0;
}