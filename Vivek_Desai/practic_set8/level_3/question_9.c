#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "This is an umbrella";

    int l = strlen(str);

    // int num = 0, small = 0, large = 0;

    char word[20] = "";

    char small_word[10] = "";

    char large_word[20] = "";

    int j = 0;

    for(int i = 0; i <= l;i++){
        if(str[i] == ' ' || str[i] == '\0'){
           word[j] = '\0';

           if(strlen(word)>strlen(large_word)){
                strcpy(large_word,word);
           }
           if(strlen(word)<strlen(small_word) || strlen(small_word) == 0){
                strcpy(small_word,word);
           }

           j =0;
        }
        else{
            word[j++] = str[i];
   
        }

    }
    printf("largest word of string is %s\n",large_word);

    printf("smallest word of string is %s",small_word);




    return 0;
}