#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "a b c d e f g h i";

   int l = strlen(str);
//    printf("%d",l);

    for(int i = l;i>=0;i--){
        printf("%c",str[i]);
    }

   return 0;
}