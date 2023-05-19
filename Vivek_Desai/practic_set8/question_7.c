#include<stdio.h>

int main(){
    char str1[10] = "hello";
    char str2[10] = "Hello";
    int check = 1;

    for(int i = 0;str1[i] != '\0';i++){
        if(str1[i] != str2[i]){
            check = 0;
            
        }

    }
    if(check == 1){
        printf("strings is equel");
    }
    else{
        printf("strings is not equel");
    }
    


    return 0;
}