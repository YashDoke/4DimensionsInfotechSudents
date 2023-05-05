#include<stdio.h>


int main(){

    // int num = 20;
    // int x = 10;
    // int y =20;
    // int z = 9;

    // if(y==10)
    // printf("%d",y);
    // y++;
    // printf("\n%d",y);


    // if(y==10){
    //     printf("%d",y);
    // }
    // else{
    //     y++;
    //     printf("\n%d",y);
    // }


    // if(y==10){
    //     printf("%d",y);
    // }
    // else{
    //     y++;
    //     printf("\n%d",y);

    //     if
    // }


    // int num;
    // if(num%2==0){.

    // }
    // else if(num%3==0){

    // }
    // else if(num%4==0){

    // }
    // else if(num%5==0){

    // }
    // else if(num%6==0){

    // }


    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);

    if(age>18){
        printf("You can vote");
    }
    else if(age==18){
        printf("You can vote");
    }
    else{
        printf("you can't vote\n");
        int diff_in_age=18-age;
        printf("Wait for %d years",diff_in_age);

        // if(age==17){
        //     printf("Wait for 1 year");
        // }
        // else if(age==16){
        //     printf("Wait for 2 year");
        // }
        // else if(age==15){
        //     printf("Wait for 3 year");
        // }
        // else if(age==14){
        //     printf("Wait for 4 year");
        // }
        // else if(age==13){
        //     printf("Wait for 5 year");
        // }
        // else if(age==12){
        //     printf("Wait for 6 year");
        // }
        // else{
        //     printf("You are too small");
        // }
    
    }
    return 0;
}