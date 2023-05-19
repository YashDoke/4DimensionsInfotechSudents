#include<stdio.h>

int sumArray(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    printf("sum of array element: %d",sum);

    return 0;

}

int main(){
    int n;
    printf("enetr the array length: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enetr the element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sumArray(arr,n);



    return 0;
}