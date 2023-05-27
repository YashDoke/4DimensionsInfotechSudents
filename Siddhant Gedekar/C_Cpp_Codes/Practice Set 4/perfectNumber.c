#include<stdio.h>

int perfectNumber(int n){
    int check=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            check+=i;
        }
    }
    if(check==n){
        printf("%d is a perfect number.\n",n);
    }
    return 0;
}

int main(){
    // take a number
    for(int i=1;i<=1000;i++){
        perfectNumber(i);
    }
    return 0;
}