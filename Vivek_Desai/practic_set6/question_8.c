#include<stdio.h>

int main(){
    int arr[4][5];

    printf("Enetr the array element: ");

    for(int i=0;i<4;i++){

        for(int j = 0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        printf("{");
        for(int j = 0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("}");
    }


    return 0;
}