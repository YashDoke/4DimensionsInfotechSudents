#include<stdio.h>

int evenOdd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(evenOdd(n)){
        printf("%d is even.\n",n);
    }
    else{
        printf("%d is odd.\n",n);
    }
    return 0;
}