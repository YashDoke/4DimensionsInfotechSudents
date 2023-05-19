#include<stdio.h>

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int sum = 0;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3 ; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    printf("%d ", sum);
    printf("\n");
    
    int j = 2, sum2 = 0;

    for(int i = 0;i<3;i++){
        // while(j>=0){
        //     sum2 += arr[i][j];
        //     j--;
        //     break;

        // }

        for(j;j>=0;){
            sum2 += arr[i][j];
            j--;
            break;
        }
    }

    printf("%d",sum2);





    return 0;
}