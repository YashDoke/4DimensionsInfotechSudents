#include<stdio.h>

int array(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

int main(){

    int n;
    printf("enetr the length of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enetr the array elemet: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   

    array(arr,n);



    return 0;
}