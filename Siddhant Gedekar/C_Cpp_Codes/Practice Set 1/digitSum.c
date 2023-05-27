#include<stdio.h>

int main(){
    int number;
    printf("Enter 3 digit number: ");
    scanf("%d",&number);
    int res=0;
    res += number%10;
    number/=10;
    
    res += number%10;
    number/=10;
    
    res += number%10;
    printf("result: %d",res);
    return 0;
}