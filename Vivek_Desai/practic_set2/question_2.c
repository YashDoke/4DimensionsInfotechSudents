#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the A and B:");
    scanf("%d %d",&a,&b);

    // printf("Enter the Breadth:");
    // scanf("%d\n",&b);

    if(a>b){
        printf("\nA is gretter than B");
    }
    else{
        printf("\nA is less than B");
    }
    return 0;
}