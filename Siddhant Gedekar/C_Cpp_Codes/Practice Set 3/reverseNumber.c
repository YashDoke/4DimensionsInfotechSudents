#include<stdio.h>

int main(){
    int num, digit=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num!=0){
        digit = num%10 + digit*10;
        num /= 10;
    }
    printf("%d",digit);
    return 0;
}