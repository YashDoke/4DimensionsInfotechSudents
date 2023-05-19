#include<stdio.h>

int main(){

    int arr[10]={10,25,60,85,45,1,23,50,58,69};

    for(int i = 0; i<10 ; i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    printf("assending order: ");
    for( int i = 0; i<10; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}