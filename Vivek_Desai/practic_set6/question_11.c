#include<stdio.h>

int main(){

    int arr[6]={2,3,15,15,3,2};
    int check = 1;
    for(int i = 0; i<3; i++){
        if(arr[i] != arr[6-i-1]){
            check = 0;

            break;
        }
           
        
    }
    if(check == 1){
        printf("Element  is same");
    }
    else{
        printf("Element is not same");
    }

    return 0;
}