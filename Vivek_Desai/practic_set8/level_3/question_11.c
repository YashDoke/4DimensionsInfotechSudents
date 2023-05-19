#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "keel";
    char str2[] = "klee";

    char temp;
    char temp2;

    if(strlen(str1) == strlen(str2)){
        for(int j = 0; j<strlen(str2);j++){
            for(int i = 0;i<strlen(str1)-1;i++){
                if(str1[i]>str1[i+1]){
                    temp = str1[i];
                    str1[i] = str1[i+1];
                    str1[i+1] = temp;
                }
                if(str2[i]>str2[i+1]){
                    temp2 = str2[i];
                    str2[i] = str2[i+1];
                    str2[i+1] = temp2;
                }
            }
        }

    }
    if(strcmp(str1,str2) == 0){
        printf("strings are anagrams");
    }
    else{
        printf("strings are not anagrams");
    }


    return 0;
}