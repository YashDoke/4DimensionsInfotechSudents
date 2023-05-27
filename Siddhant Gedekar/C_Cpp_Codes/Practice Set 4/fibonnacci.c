#include<stdio.h>

int fibonnaci(int n){
    if(n==1 || n==0){
        return 1;
    }
    return fibonnaci(n-1)*fibonnaci(n-2);
}

int main(){
    printf("%d",fibonnaci(6));
    return 0;
}