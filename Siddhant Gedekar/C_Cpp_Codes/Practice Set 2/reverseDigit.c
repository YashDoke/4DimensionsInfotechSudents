#include<stdio.h>

int main(){
    int digit,res=0,revn=0;
    printf("Enter a four digit number: ");
    scanf("%d",&digit);
    // printf("%d",sizeof(digit));

    while(digit!=0){
        res = digit%10+(res*10);
        digit /= 10;
    }

    printf("Digit: %d",res);

    return 0;
}