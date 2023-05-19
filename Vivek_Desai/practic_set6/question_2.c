#include<stdio.h>


int main(){
    int num;
    int arr[10];

    for(int i=0;1<10;i++){
        printf("enter enteger: ");
        scanf("%d",arr[i]);
    }

    printf("enetr check number: ");
    scanf("%d",&num);

    for(int j=0;j<10;j++){
        if(arr[j] == num){
            printf("it is present");
        }
        else{
            printf("it is not present");
        }
    }
    return 0;
}