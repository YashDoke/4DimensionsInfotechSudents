#include<stdio.h>

int main(){

    int num;
    int arr[20];

    printf("Enetr the array values: ");

    for(int i=0;i<20;i++){
        scanf("%d",&arr[i]);
    }

    printf("printing array:\n ");

     for(int i=0;i<20;i++){
        printf("\n%d the Number of arrey: %d\n",i,arr[i]);
        if(arr[i]>0){
            printf("it is positive number\n");
        }
        else if(arr[i]<0){
            printf("it is negative number\n");
        }
        else{
            printf("Number is zero:\n");
        }

        if(arr[i]%2==0){
            printf("It is even Number\n");
        }
        else{
            printf("It is odd Number\n");
        }
    }
    return 0;
}
    