#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "Hello, have a good day";
    // char vowels[] = "aeiou";

    for(int i=0;i<strlen(string);i++){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
            printf("%c ",string[i]);
        }
        else{
            continue;
        }
    }
    // for(int i=0;i<strlen(string);i++){
    //     for(int j=0;j<strlen(vowels);j++){
    //         if(vowels[j]==string[i]){
    //             printf("%c ",string[i]);
    //         }
    //     }
    // }
    return 0;
}