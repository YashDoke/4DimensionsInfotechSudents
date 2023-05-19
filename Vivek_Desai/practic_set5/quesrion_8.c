#include<stdio.h>

int numDigit(int num){
    int digit = 1;
    for(int i = 1;num/10>i;i++){
        digit += 1;
    }
    return digit;
}
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

void StrongNumber(int num){
    int temp = num;
    int Strong = 0;
    for (int i = 0; i <numDigit(num) ; i++)
    {
        int a = temp%10;
        temp = temp/10;
        Strong = Strong + factorial(a);
    }

    if(num==Strong){
    printf("%d\n",Strong);
    }
}

int main(){
    int start, end , num;

    printf("Enetr the start number: ");
    scanf("%d",&start);

    printf("Enetr the End number:");
    scanf("%d",&end);

    for(int i = start; i<end;i++){
        num = i;
        numDigit(i);
    }
    StrongNumber(num);





    return 0;
}