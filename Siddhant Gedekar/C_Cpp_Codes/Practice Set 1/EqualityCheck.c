#include<stdio.h>

// checking the equality of two numbers

int main(){
    int a, b;
    printf("Enter two digits: ");
    scanf("%d %d",&a,&b);
    printf("If 1 then Equal else Not Equal: '%d'",a==b);

    return 0;
}