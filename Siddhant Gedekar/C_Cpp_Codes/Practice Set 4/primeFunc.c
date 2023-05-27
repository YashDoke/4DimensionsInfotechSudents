#include<stdio.h>

void prime(int n){
    // to check if no. is prime or not
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>1){
        count=0;
    }
    else{
        count=0;
        printf("%d is prime number.\n",n);
    }
    // return 0;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}