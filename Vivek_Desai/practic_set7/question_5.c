#include<stdio.h>

int numberPointer(int ptr){
    printf("Value of pointer:%d",ptr);
}

int main(){
    int num;

    printf("Enetr the number:");
    scanf("%d",&num);

    int *ptr = &num;

    numberPointer(*ptr);




    return 0;
}