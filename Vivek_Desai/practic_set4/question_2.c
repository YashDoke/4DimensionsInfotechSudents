#include<stdio.h>

float circle(float r){
    printf("area of circle %.2f",3.14*(r*r));
    printf("\ncercumfares of circle %.2f",2*3.14*r);
}

int main(){

    circle(10);
    return 0;
}