// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[] = "This is orange juice";
//     char str2[] = "orange";
//     char word[10] = "";

//     for(int i = 0; i<sizeof(str1);i++){
//         int matched = 1;
//         for(int j = 0; j<sizeof(str2);j++){
//             if(str1[i+j]!=str2[j]){
//                 matched = 0;
//                 break;
//             }
            
//         }

//         if(matched==1){
//             strcpy(word,str2);
//             printf("Word %s is present in string",word);
//             break;
//         }
        
//     }

//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "This is lamon juice";
    char str2[] = "lamon";
    char word[10] = "";

    for(int i = 0; i < sizeof(str1); i++){
        int matched = 1;
        for(int j = 0; j < strlen(str2); j++){
            if(str1[i + j] != str2[j]){
                matched = 0;
                break;
            }
            
        }

        if(matched == 1){
            strcpy(word, str2);
            printf("Word '%s' is present in string\n", word);
            break;
        }
        // else {
        //     printf("No match at index %d\n", i);
        // }
    }

    return 0;
}
