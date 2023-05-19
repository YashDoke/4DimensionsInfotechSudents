#include<stdio.h>
#include<string.h>

int main(){
    char str[]="adddd";

    int length = strlen(str);
    int j = length -1;
    int check = 1;

    for(int i = 0; i < length/2;i++){
        if(str[i] != str[j]){
            check = 0;
            break;
        }
        j--;
    }

    if(check == 1){
        printf("string is a Palindrome");
    }
    else{
        printf("string is not a Palindrome");

    }

    return 0;
}