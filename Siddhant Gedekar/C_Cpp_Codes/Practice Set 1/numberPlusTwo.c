#include <stdio.h>

// program to find increment of individual numbers from original number

int main(){
    int number,res=0;
    printf("Enter 4 digit number: ");

    scanf("%d",&number);
    res += (number/1000 %10+2)%10;
    res*=10;
    res += (number/100 %10+2)%10;
    res*=10;
    res += (number/10 %10+2)%10;
    res*=10;
    res += (number%10+2)%10;

    printf("%d",res);
    return 0;
}