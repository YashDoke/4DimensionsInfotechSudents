#include<stdio.h>

int main(){

    int arr[5]={4,6,3,8,2};
    int lr,sm;

    for(int i = 0;i<5;i++){
        for(int j =0;j<5;j++){
            if(arr[i]<arr[j]){
                sm = arr[i];
            }
            else if(arr[i]>arr[j]){
                lr = arr[i];
            }
        }
    }
    printf("Large %d\n",lr);

    printf("small %d",sm);

    return 0;
}