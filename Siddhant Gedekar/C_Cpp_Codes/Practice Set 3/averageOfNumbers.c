#include<stdio.h>

int main(){
    int a;
    float res=0;
    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&a);
        res += a;
    }
    printf("Average of 10 numbers is: %.2f",(res/10));

    return 0;
}