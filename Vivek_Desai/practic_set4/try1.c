#include<stdio.h>

int perfectNo(int num){
    int sum = 0;
    for(int i = 1;i<=num/2;i++){
        if(num%i == 0){
            // printf("%d\n",i);
            sum += i;
        }
    }
    if(sum == num){
        printf("it is perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}

int main(){
    int num;
    printf("Enetr the number: ");
    scanf("%d",&num);

    perfectNo(num);

    return 0;
}