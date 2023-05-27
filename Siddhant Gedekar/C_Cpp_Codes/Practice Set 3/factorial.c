#include<stdio.h>

int main(){
    int fact, sum=1;
    printf("Enter number for factorial: ");
    scanf("%d",&fact);
    
    for(int i=1;i<=fact;i++){
        sum = sum * i;
    }
    printf("Factorial is: %d",sum);
    return 0;
}