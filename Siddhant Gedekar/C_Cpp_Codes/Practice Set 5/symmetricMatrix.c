/*
1. Take 2d array
2. perform transpose of 1st array and store in other array
*/

#include<stdio.h>

int main(){

    // Take array input
    int a[3][3],b[3][3];
    printf("Enter values of 2d matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int count=0;
    // Performing matrix transpose
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[j][i] = a[i][j];
        }
    }

    // Check if matrix is symmetric or not
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!=b[i][j]){
                count++;
            }
        }
    }

    if(count>0){
        printf("Matrix is not symmetric.");
    }
    else{
        printf("Matrix is symmetric.");
    }

    return 0;
}