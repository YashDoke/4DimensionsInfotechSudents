#include<stdio.h>

int main(){

    int x;

    printf("Enter four digit number: ");
    scanf("%d",&x);

    x += 8;

    x /= 3;

    x %= 5;

    x *= 5;

    printf("%d",x);


    return 0;
}