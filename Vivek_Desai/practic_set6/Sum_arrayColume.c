#include<stdio.h>


int main(){

    int arr[3][3]={{1,2,3},{4,3,2},{3,4,5}};

    int sum_col = 0, sum_row = 0;

    for(int i = 0; i<3;i++){
        for(int j = 0; j < 3;j++){
            sum_row += arr[i][j];
            sum_col += arr[j][i];
        }
        printf("%d  ",sum_col);
        printf(" %d",sum_row);
        sum_col = 0, sum_row = 0;

        printf("\n");
    }


    return 0;
}