#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "This is umbrella";
    int length = strlen(str), check_e = 0 , check_is = 0;

    for(int i = 0; i < length; i++){
        if(str[i] == 'e' || str[i] == 'E'){
            check_e = 1;
        }
        if(str[i] == ' ' && str[i+1] == 'i' && str[i+2] == 's'){
            check_is = 1;
        }
    }

    if(check_e == 1){
        printf("E is present");
    }
    else{
        printf("E is not present");
    }

    if(check_is == 1){
        printf("\n'is' is present");
    }
    else{
        printf("\n 'is' Not present");
    }



    return 0;
}