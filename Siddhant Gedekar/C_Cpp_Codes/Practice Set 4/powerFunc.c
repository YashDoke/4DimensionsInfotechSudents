#include<stdio.h>

int power(int n, int n1, int t){
    if(t==n1){
        return n*n;
    }
    // printf("%d",n*n1);
    return power(n*n,n,t+1);
}

int main(){
    printf("%d\n",power(2,4,1));
    return 0;
}