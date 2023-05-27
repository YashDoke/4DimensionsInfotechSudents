#include<stdio.h>

// creating a function for making an array
int arrFunc(int a[],int i){
    if(i==10){
        return 0;
    }
    scanf("%d",&a[i]);
    arrFunc(a,i+1);
    // return a;
}

int main(){
    int a[10];
    printf("Enter array values: ");
    arrFunc(a,0);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    // taking a random number from user and checking if it is present in the array.
    printf("\nEnter a number: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(a[i]==n){
            printf("Number %d is present in the array.",n);
        }
    }
    return 0;
}