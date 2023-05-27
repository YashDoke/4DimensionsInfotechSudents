#include<stdio.h>

int arrayProd(int a[]){
    int sum=1;
    for(int i=0;i<10;i++){
        sum*=a[i];
    }
    return sum;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("product of array is: ");
    int j = arrayProd(a);
    printf("%d",j);
    return 0;
}