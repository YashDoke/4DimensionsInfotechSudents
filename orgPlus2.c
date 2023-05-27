#include<stdio.h>

// display result as last digit plus 2 of a four digit number

int main(){
    int fourDigit;
    printf("Enter a four digit number: ");
    scanf("%d",&fourDigit);
    int res=0000;
    res += fourDigit%10 + 2;
    printf("%d",res);
    
    return 0;
}