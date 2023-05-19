#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Vivekdesai6658@gmail com";
// d = 4 v= 8 s = 1 c 11
    int vowels = 0;
    int digit = 0;
    int space = 0;
    int  consonents = 0;

    for(int i = 0; i<strlen(str);i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowels++;
        }
        else if(str[i]>48 && str[i]<57){
            digit++;
        }
        else if(str[i] == ' '){
            space++;
        }
        else{
            consonents++;

        }
    }

    printf("vowels: %d \nconsonents: %d\ndigit: %d\nspace: %d",vowels,consonents,digit,space);



    return 0;
}