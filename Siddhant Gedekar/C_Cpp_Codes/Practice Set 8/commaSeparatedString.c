#include<stdio.h>
#include<string.h>

int main(){
    char hello[] = "Hello, This, is, a, Good, Morning";
    char target1 = ',';
    int firstComma = 0;
    int lastComma = 0;
    // to find the max occurence of ',' in the string
    for(int i=0;i<strlen(hello);i++){
        if(target1==hello[i]){
            lastComma++;
        }
    }printf("',' occured %d times.\n",lastComma);

    // iterating through the string array hello[]
    for(int j=0;j<strlen(hello);j++){
        // checking if the target is present in the hello[] array
        // if yes then we increment value of first comman by 1
        if(target1==hello[j]){
            firstComma++;
            // if target is encountered first time then we print the string
            if(firstComma==1){
                // firstComma++;
                // printing the string untill ','
                for(int k=0;k<strlen(hello);k++){
                    if(target1!=hello[k]){
                        printf("%c",hello[k]);
                    }
                    // if we found the target in the hello[] then we break
                    if(target1==hello[k]){
                        break;
                    }
                }
            }
        }
        // checking if we have reached the last target in the hello[]
        if(firstComma>=lastComma){
            // if true then we start priting the remaining string.
            for(int k=j+1;k<strlen(hello);k++){
                if(target1!=hello[k]){
                    printf("%c",hello[k]);
                }
            }
            break;
        }
    }
    return 0;
}