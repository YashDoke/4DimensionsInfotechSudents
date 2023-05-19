#include<stdio.h>

int main(){
    int arr[3][3]={{1,2,3},{2,4,5},{3,5,8}};
    int symm[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            symm[i][j]=arr[j][i];  
        }
    }

    int check = 1;

    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] != symm[i][j]){
                check = 0;
                break;
            }
        }
    }
    if(check == 1){
        printf("symmitric");
    }
    else{
        printf("not");
    }

    

    return 0;
}