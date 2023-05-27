#include<stdio.h>
#include<string.h>

void surname(char name[]){
    int space=0, k=0;;
    for(int i=0;i<strlen(name);i++){
        if(name[i]==' '){
            space++;
        }
    }
    for(int i=0;i<strlen(name);i++){
        if(i==0){
            printf("%c. ",name[i]);
        }
        if(name[i]==' ' && k!=space){
            k++;
            if(k==space){
                for(int j=i;j<strlen(name);j++){
                    printf("%c",name[j]);
                }
                printf("\n");
                break;
            }
            printf("%c. ",name[i+1]);
        }
    }
}

int main(){
    char name[] = "Avul Pakir Jainulabdeen Abdul Kalam";
    char name2[] = "Chandrasekhara Venkata Raman";
    surname(name);
    surname(name2);
    // printf("Number of spaces: %d\n",space);
    
    return 0;
}