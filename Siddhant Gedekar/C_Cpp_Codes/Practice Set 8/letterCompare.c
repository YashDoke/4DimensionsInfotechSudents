#include<stdio.h>

int main(){
    char s[] = "Umbrella";
    char s1[] = "This is orange juice";
    char s2[] = "juice";
    // printf("%d\n",sizeof(s1));

    int count=0;
    for(int i=0;i<sizeof(s);i++){
        if(s[i]=='e'){
            count++;
        }
    }
    if(count==0){
        printf("word e is not present\n");
    }
    else{
        printf("word e is present\n");
    }

    count=1;
    int j=0;
    for(int i=0;i<sizeof(s1);i++){
        if(s1[i]==s2[j]){
            count++;
            j++;
            if(count==sizeof(s2)){
                break;
            }
        }
        else{
            count=1;
            j=0;
        }    
    }
    if(count==sizeof(s2)){
        printf("orange is present");
    }
    else{
        printf("orange is not present");
    }

    return 0;
}