#include<stdio.h>

int main(){
    int arr2[10];
    int arr[10];

    printf("Enter the arrey value: ");

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("reverse arrey: ");
    for(int j = 9,k=0;j>=0;j--,k++){
        arr2[k] = arr[j];
        printf("%d,",arr2[k]);
    }
    return 0;
}