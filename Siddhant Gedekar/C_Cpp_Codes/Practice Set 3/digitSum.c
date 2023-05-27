#include<stdio.h>

int main(){
    int digit;
    int num=0,sum=0;
    printf("Enter any digit number: ");
    scanf("%d",&digit);
    while(digit!=0){
        sum++;
        num=digit%10 + num;
        digit/=10;
    }
    printf("%d",num);
    return 0;
}