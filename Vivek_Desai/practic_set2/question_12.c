#include<stdio.h>

int main(){

    char c;

    printf("Enter the Caracter:");
    scanf("%c",&c);

    if(c>'a' && c<'z'){
        printf("It is a lowercase caracter: %c",c);
    }
    else if(c>'A' && c<'Z') {
        printf("It is uppercase caracter: %c",c);
    }
    else{
        printf("It is not a caracter");
    }
}