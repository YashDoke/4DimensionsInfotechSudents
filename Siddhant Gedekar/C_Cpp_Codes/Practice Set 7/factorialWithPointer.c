#include<stdio.h>

int factorial(int *n, int n1){
    if(n1==1){
        return (*n)*(n1);
    }
    *n = (*n)*(n1-1);

    return factorial(n,n1-1);
}

int main(){
    int a,b;
    
    // b=&a;
    //  int *ptr = 6422296;
    // printf("%d\n",*ptr);
    // printf("%d\n",&a);
    printf("Enter Factorial number: ");
    scanf("%d",&a);

    int *ptr = &a;
    b=a;
    a = factorial(ptr,b);
    printf("%d",a);
    return 0;
}