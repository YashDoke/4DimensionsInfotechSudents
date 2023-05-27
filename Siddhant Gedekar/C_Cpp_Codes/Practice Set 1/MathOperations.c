#include<stdio.h>

// mathematical operation

int main(){
    float no;
    int res;
    printf("Enter a 4 digit number: ");
    scanf("%f",&no);
    res = no+8/3;
    res = res%5;
    res *= 5;
    printf("Result: %d",res);
    return 0;
}