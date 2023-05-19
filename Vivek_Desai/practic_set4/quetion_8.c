#include<stdio.h>

int power(int num1,int num2){
    int temp = num1;
    for(int i = 1;i<num2;i++){
        num1 = num1*temp;

    }
    return num1;
}

int main(){
    int num1,num2;
    printf("enetr 1st number: ");
    scanf("%d",&num1);
    printf("enetr 2nd number: ");
    scanf("%d",&num2);

    printf("%d",power(num1,num2));
    


    return 0;
}