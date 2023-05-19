#include<stdio.h>

int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int arr2[3][3]={{2,5,4},{6,7,9},{3,8,2}};

    int arr_add[3][3];

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            arr_add[i][j] = arr1[i][j] + arr2[i][j]; 
        }
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr_add[i][j]);
        }
        printf("\n");
    }

    


    return 0;
}