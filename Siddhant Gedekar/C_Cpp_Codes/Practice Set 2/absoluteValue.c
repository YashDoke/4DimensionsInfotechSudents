#include<stdio.h>

int main(){
    float value;
    printf("Enter a value: ");
    scanf("%f",&value);
    if(value<0){
        printf("Output: %.1f",value*-1);
    }
    else{
        printf("Output: %.1f",value);
    }
    return 0;
}