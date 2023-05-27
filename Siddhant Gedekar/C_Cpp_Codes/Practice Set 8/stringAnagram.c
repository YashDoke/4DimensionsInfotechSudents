#include<stdio.h>
#include<string.h>

char stringSort(char s[], int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(s[i]>s[j]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s[len];
}

int main(){
    char str1[] = "jaxa";
    char str2[] = "xaax";
    int len = strlen(str1);

    if(strlen(str1)==strlen(str2)){
        stringSort(str1,len);
        stringSort(str2,len);
        if(strcmp(str1,str2)==0){
            printf("Strings are Anagrams");
        }
        else{
            printf("Strings are not Anagrams");
        }
    }
    else{
        printf("Strings are not Anagrams");
    }

    return 0;
}