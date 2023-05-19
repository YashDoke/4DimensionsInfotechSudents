#include<stdio.h>

int main(){


    char str[] = "HEllo, have a good day";


    for(int i = 0; str[i] != '\0';i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            
            if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){

                printf("%c",str[i]);
            }
        }
    }
}