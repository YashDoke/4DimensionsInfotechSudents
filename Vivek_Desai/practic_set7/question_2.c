#include<stdio.h>

int main(){
    int num;
    printf("Enetr the Value:");
    scanf("%d",&num);

    int *ptr = &num;

    printf("Value of pointer: %d\n",*ptr);
    printf("Address of pointer: %d\n",ptr);


    return 0;
}