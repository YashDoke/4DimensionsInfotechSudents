#include<stdio.h>

int main(){
    char str[] = "Hello, Good, Morning";

    char chr = ',';

    int first_chr = -1 , second_chr = -1;

    for(int i = 0;str[i]!='\0';i++){
        if(str[i] == chr){
            if(first_chr == -1){
                first_chr = i;
            }
            second_chr = i;
        }
    }
    printf("First Accorrence of %c in index %d\n",chr,first_chr);
    printf("First Accorrence of %c in index %d",chr,second_chr);



    return 0;
}