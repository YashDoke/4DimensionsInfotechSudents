#include<stdio.h>
#include<string.h>


int main(){
    char str[] = "hello";
    char str1[] = "HELLO";

    printf("Comparing strings\n");
    printf("%d\n",strcmp(str,str1));
    printf("%d\n",strcmp(str1,str));

    int count=0;
    for(int i=0;i<sizeof(str);i++){
        if(str[i]==str1[i]){
            count++;
        }
    }
    if(count==sizeof(str)){
        printf("strings are equal.");
    }
    else{
        printf("strings are not equal.");
    }
    return 0;
}