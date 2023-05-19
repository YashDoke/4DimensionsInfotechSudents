#include<stdio.h>

int isprime(int num){

    int aprime = 1;
    for(int i=2;i<num/2;i++){
        if(num%i == 0){
            aprime = 0;           
        }
    }
    if(aprime == 1){
        printf("It is prime number: %d",num);
    }
    else{
        printf("It is not prime number: %d",num);
    }
    return 0;
}

int main(){
    int num;
    printf("Enetr the number: ");
    scanf("%d",&num);


    isprime(num);



    return 0;
}