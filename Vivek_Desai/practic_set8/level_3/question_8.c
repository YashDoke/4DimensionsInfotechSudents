#include<stdio.h>
#include<string.h>

int main(){

    char str1[] = "vivek vasant";

    char str2[] = " desai";

    // int total = strlen(str1)+strlen(str2);
    char word[50] = "";
    int i = 0;
    
    for(int j = 0; j < strlen(str1); j++){
        word[i] = str1[j];
       i++;
    }
    for(int k = 0; k <strlen(str2);k++){
        word[i] = str2[k];
        i++;
    }
    
    printf("%s",word);




    return 0;
}