#include<stdio.h>
#include<string.h>

int main(){
    char s1[10] = "hello";
    char s2[10] = "World";

    strcpy(s1,s2);

    printf("copy to s1 to s2: %s",s1);


    return 0;
}