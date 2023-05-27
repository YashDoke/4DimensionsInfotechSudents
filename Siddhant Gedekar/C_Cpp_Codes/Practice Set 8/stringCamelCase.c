#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "hello friends";
    char str1[] = "good bye friends";

    printf("Upper case: %s\n",strupr(str));
    printf("Lower case: %s\n",strlwr(str1));
    printf("Merging strings: %s\n",strcat(str,str1));
    printf("Before Copying strings: %s, %s\n",str,str1);
    strcpy(str,str1);
    printf("After Copying strings: %s, %s\n",str,str1);
    return 0;
}