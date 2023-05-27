#include<stdio.h>
#include<string.h>

void str(char s[]){
    printf("I Love %s.",s);
}

int main(){
    char s[50];
    printf("Enter what you love(single word prefered): ");

    scanf("%s",&s);
    str(s);

    return 0;
}