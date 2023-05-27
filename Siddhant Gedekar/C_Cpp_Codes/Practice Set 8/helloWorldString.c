#include<stdio.h>
#include<string.h>


int main(){
    char str[] = "Hello, World";
    char target[] = "oldW";

    for(int i=0;i<strlen(target);i++){
        for(int j=i;j<strlen(str);j++){
            if(target[i]==str[j]){
                printf("Found %c\n",target[i]);
                break;
            }
        }
    }
    return 0;
}