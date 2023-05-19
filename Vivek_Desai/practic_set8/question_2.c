#include<stdio.h>

int main(){
    char str[20];

    printf("Enetr the sring:");
    gets(str);

    printf("your string is : ");
    puts(str);

    for(int i = 0;str[i] != '\0';i++){
        printf("%c\n",str[i]);
    }


    return 0;
}