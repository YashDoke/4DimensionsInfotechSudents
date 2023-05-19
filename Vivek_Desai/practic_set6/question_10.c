#include<stdio.h>

int main(){

    int arr[5];
    int sum = 0,avr,a;

    printf("Enter the element: ");

    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);

        sum += arr[i];
    }
    avr = sum / 5;

    int sm = arr[0],lr = arr[0];

    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(arr[i]<sm){
                sm = arr[i];
            }
            else if(arr[i]>lr){
                lr = arr[i];
            }
        }
    }

    printf("sum %d\n average %d\n small %d\n large %d",sum,avr,sm,lr);
    return 0;
}