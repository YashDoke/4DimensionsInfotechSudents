#include<stdio.h>

int main(){

    int arr[10];
    int product = 1;

    printf("Enetr the array element: ");

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        product *= arr[i];
    }
    printf("product of array: %d",product);

    return 0;
}