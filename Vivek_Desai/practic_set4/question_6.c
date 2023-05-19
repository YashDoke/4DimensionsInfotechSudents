#include<stdio.h>
int chakeVote(int age){
    if(age>=18){
        printf("Allow to voting");
    }
    else{
        printf("not Allow to voting");
    }
    return 0;
}

int main(){
    int age;
    printf("Enter the voter age: ");
    scanf("%d",&age);

    chakeVote(age);

    return 0;

}