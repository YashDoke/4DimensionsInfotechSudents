#include<stdio.h>
int even(int num){
    if(num%2==0){
        printf("it is even number");
    }
    else{
        printf("it is odd number");
    }


    return 0;
}


int main(){
    int num;
    printf("Enter the numner: ");
    scanf("%d",&num);

    even(num);

    return 0;
}