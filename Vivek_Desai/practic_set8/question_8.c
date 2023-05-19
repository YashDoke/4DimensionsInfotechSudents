#include<stdio.h>

int main(){

    char str[] = "Umbrella";
    int check = 1;


    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == 'e'){
            check = 0;

            break;
        }
    }
    if(check == 0){
        printf("'e' id present");
    }
    else{
        printf("'e' is not present");
    }


    return 0;
}