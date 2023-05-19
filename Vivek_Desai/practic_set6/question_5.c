#include<stdio.h>

int main(){

    int arr[10];
    int sum = 0;

    printf("Enetr arrey element: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("addition of totel arrey element: %d",sum);

    return 0;
}