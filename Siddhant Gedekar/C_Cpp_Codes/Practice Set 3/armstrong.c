#include<stdio.h>

int main(){
    int num,sum,cube=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    int org = num;
    while(num!=0){
        sum = num%10;
        cube += (sum*sum*sum);
        num/=10;
    }
    if(cube==org){
        printf("Armstrong number.");
    }
    else{
        printf("Not Armstrong number.");
    }

    return 0;
}