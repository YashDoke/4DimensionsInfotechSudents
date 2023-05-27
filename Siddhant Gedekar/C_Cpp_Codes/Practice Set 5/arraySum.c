#include<stdio.h>

int arraySum(int a[]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("sum of array is: ");
    int j = arraySum(a);
    printf("%d",j);
    return 0;
}