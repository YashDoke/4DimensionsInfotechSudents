#include<stdio.h>

int table(int n,int t){
    if(t==10){
        return n*t;
    }
    printf("%d\n",n*t);
    return table(n,t+1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",table(n,1));
    return 0;
}