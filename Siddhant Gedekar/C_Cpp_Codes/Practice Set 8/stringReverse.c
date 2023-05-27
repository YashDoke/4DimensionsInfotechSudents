#include<stdio.h>
#include<string.h>


int main(){
    char name[] = {"siddhant"};

    // Reversing a string
    for(int i=0;i<strlen(name);i++){
        // iterating till length of string
        for(int j=i;j<strlen(name);j++){
            // after every iteration in the char array we start loop for i+1
            // that is decreasing the number of iterations
            char temp = name[i];
            name[i] = name[j];
            name[j] = temp;
        }
    }

    for(int i=0;i<strlen(name);i++){
        printf("%c",name[i]);
    }

    return 0;
}