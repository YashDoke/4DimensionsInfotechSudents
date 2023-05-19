#include<stdio.h>
#include<string.h>

int main(){

    char str[10][20] ={"vivek","prajwal","avinash","omkar","rohit","harsh","darshan","abhishek","varun","pratik"};

    char temp[20] = "";

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10 ; j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);

            }

        }
    }
    for(int i = 0; i<10;i++){
        printf("%s ",str[i]);
    }    // printf("%d",strcmp(str[0],str[2]));
    
    return 0;
}