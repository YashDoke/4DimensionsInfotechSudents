#include<stdio.h>
#include<string.h>


int main(){

    char s[10] = "Hello";
    char s1[10] = "Friends";

    printf("%d\n",sizeof(s1));
    int i=0;
    while(i<(sizeof(s1))){
        s[i] = s1[i];
        printf("%d ",i);
        i++;
    }
    // for(int i=0;i<sizeof(s1);i++){
    //     s[i] = s1[i];
    // }
    printf("\nafter copying strings s=%s, s1=%s",s,s1);

    return 0;
}