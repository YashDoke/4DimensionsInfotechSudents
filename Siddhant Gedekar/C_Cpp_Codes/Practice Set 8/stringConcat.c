#include<stdio.h>
#include<string.h>

void concat(char string1[], char string2[]){
    int temp = strlen(string1) + strlen(string2);
    for(int i=0;i<strlen(string1);i++){
        if(string1[i]!='\0'){
            printf("%c",string1[i]);
        }
        else{
            break;
        }
    }
    for(int i=0;i<strlen(string2);i++){
        if(string2[i]!='\0'){
            printf("%c",string2[i]);
        }
        else{
            break;
        }
    }
}

int main(){
    printf("Concatinating two strings as follows\n");
    concat("Hello ","World");

    return 0;
}