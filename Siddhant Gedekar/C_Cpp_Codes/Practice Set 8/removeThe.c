#include<stdio.h>
#include<string.h>

int main(){
    char original[] = "This is the lion in the cage";
    char copy[100];
    char target[] = "the";
    int count = 0,k=0;


    for(int i=0;i<strlen(original);i++){
        if(target[0]==original[i]){
            for(int j=0;j<strlen(target);j++){
                if(target[j]==original[i+j]){
                    count++;
                    continue;
                }
            }
            i+=count;
        }
        else{
            count=0;
            copy[k]=original[i];
            k++;
        }
    }

    for(int i=0;i<k;i++){
        printf("%c",copy[i]);
    }
    return 0;
}