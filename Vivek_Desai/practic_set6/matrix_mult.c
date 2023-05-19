#include<stdio.h>

int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int arr2[3][3]={{1,5,9},{3,6,7},{2,4,8}};

    int arr_mult[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

    for(int i =0; i<3;i++){
        for(int j = 0; j <3; j++){
            for(int k=0;k<3;k++){
                arr_mult[i][j] += arr1[i][k]*arr2[k][j];
                
            
            }
            
        }
    }
    
        for(int i = 0;i<3;i++){
            for(int j =0;j<3;j++){
                printf("%d ",arr_mult[i][j]);
            }
            printf("\n");
        }




    return 0;
}