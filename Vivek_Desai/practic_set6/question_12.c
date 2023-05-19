#include<stdio.h>

int main(){

    int arr[10]={5,2,25,14,54,65,85,95,53,4};
    int arr1[5];
    int arr2[5];

    for(int i = 0;i<5;i++){
        arr1[i] = arr[i];
    }
    for(int k = 4,j = 10-1;j>=5;j--){
        arr2[k] = arr[j];
      k--;
    }

    for(int i = 0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i = 0;i<5;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}