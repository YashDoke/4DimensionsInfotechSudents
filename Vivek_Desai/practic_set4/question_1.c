#include<stdio.h>

int rectangle(int l,int b){
    printf("Area or rectangle: %d",l*b);
    printf("\nperimeter of rectangle: %d",2*(l+b));
    return 0;
}

int main(){

    rectangle(20,15);

    return 0;
}