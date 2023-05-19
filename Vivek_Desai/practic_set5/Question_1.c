#include<stdio.h>

int cube(int num){
    printf("code of this number is: %d",num*num*num);

    return 0;
}

int main(){
    int a;

    printf("Enetr the number: ");
    scanf("%d",&a);

    cube(a);

    return 0;
}