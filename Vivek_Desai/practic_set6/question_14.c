#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};

    int temp = arr[0];
    arr[0] = arr[5-1];
    arr[5-1] = temp;

    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}