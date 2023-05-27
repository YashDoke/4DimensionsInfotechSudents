#include<stdio.h>

int main(){
    int age1, age2, age3;
    printf("Enter age of 3 peoples: ");
    scanf("%d %d %d",&age1,&age2,&age3);

    if(age1>age2 && age1>age3){
        printf("%d is oldest .",age1);
    }
    if(age2>age1 && age2>age3){
        printf("%d is oldest.",age2);
    }
    if(age3>age1 && age3>age2){
        printf("%d is oldest.",age3);
    }
    if(age1<age2 && age1<age3){
        printf("\n%d is youngest.",age1);
    }
    if(age2<age1 && age2<age3){
        printf("\n%d is youngest.",age2);
    }
    else{
        printf("\n%d is youngest.",age3);
    }
    return 0;
}