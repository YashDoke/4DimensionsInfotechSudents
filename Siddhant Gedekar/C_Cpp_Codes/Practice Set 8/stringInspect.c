#include<stdio.h>
#include<string.h>

int main(){
    char strings[] = "This is siddhant";
    char vowels[] = {'a','e','i','o','u'};
    int freq[5];
    int count=0;
    char space = ' ';

    // for(int i=0;i<strlen(strings);i++){
    //     if(space == strings[i]){
    //         count++;
    //     }
    // }

    // printf("Space ' ' occured %d times.\n",count);
    // // count=0;

    // for(int i=0;i<5;i++){
    //     count=0;
    //     for(int j=0;j<strlen(strings);j++){
    //         if(vowels[i]==strings[j]){
    //             count++;
    //         }
    //     }
    //     freq[i] = count;
    // }

    // for(int i=0;i<5;i++){
    //     printf("%c occured %d times.\n",vowels[i],freq[i]);
    //     count+=freq[i];
    // }
    // // count += ;
    // printf("There are %d consonants.",strlen(strings)-count-2);

    return 0;
}