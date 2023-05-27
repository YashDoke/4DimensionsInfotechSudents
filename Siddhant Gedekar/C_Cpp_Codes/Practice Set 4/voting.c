#include<stdio.h>

int voting(int age){
    if(age>=18){
        printf("Eligible to vote.\n");
    }
    else{
        printf("Not eligible to vote.\n");
    }
    return 0;
}

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    voting(age);
    return 0;
}