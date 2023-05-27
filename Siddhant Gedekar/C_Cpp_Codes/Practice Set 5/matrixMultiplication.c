#include<stdio.h>

int main(){
    int a[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int c[3][3],sum=0,i,j;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         sum+=(a[i][j]*b[j][i]);
    //     }
    //     printf("%d ",sum);
    // }

    // First loop for staying in the current row of 1st matrix
    for(i=0;i<3;i++){
        // Second loop for iterating through columns of 2nd matrix
        for(j=0;j<3;j++){
            // Third loop for taking values from both matrices
            // And performing matrix multiplication
            c[i][j]=0;
            for (int k=0;k<3;k++){
                c[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }

    printf("\nPerforming Matrix Multiplication\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }

    return 0;
}