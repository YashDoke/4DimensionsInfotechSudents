#include<stdio.h>
int powerNum(int n,int p){
    int temp = n;
    for(int i = 1; i<p;i++){
        n *= temp;
    }
    return n;
}


int main(){

    int power, num;

    printf("Enetr the base: ");
    scanf("%d",&num);

    printf("Enetr the Power value:");
    scanf("%d",&power);

    printf("Power Of given Values: %d",powerNum(num,power));

    return 0;
}