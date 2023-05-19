#include<stdio.h>

int main(){

    int arr[5]={5,6,10,3,2};

    int max = arr[0];
    for(int i = 1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int next_max = 0;
    for(int i = 0; i<5;i++){
        if(arr[i]>next_max && arr[i]<max){
            next_max = arr[i];
        }
    }
    printf("%d ",next_max);

    for(int i = 0; i<5;i++){
        if(arr[i] != max){
            printf("%d ",arr[i]);
        }
    }
    printf("%d",max-next_max);



    return 0;
}