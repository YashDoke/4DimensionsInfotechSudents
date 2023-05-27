#include<stdio.h>

int primeFactor(int num){
    int checkCount=0;
    for(int i=2;i<=num;i++){
        // Checking if the quotient we find is an odd number
        // If true then we will loop until then
        if(num%i==0){
            for(int j=2;j<=i;j++){
                // And check that number is prime or not
                // if yes then we will return that number
                if(i%j==0){
                    checkCount++;
                }
            }
            if(checkCount>1){
                checkCount=0;
                // printf("%d isn't prime factor\n",i);
            }
            else{
                checkCount=0;
                printf("%d is a Prime Factor.\n",i);
            }
        }
    }
    return 0;
}

int main(){
    // Take number input
    int number;
    // Create a variable to check if the number is divisible only by single number.
    int checkCount=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    primeFactor(number);
    return 0;
}