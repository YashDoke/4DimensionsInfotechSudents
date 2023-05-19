#include<stdio.h>
#include<string.h>

int main(){
   
    
     char str1[] = "This is the lion in the cage";
    // char str2[] = "the";
    int k = 0;
    char word[30] = "";

    for(int i = 0; str1[i] != '\0';i++){

        if(str1[i] != 't' && str1[i+1] != 'h' && str1[i+2] != 'e'){

            word[k] = str1[i];

            k++;
            
        }
    }

    printf("%s",word);



    return 0;
}
