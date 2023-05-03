#include<stdio.h>

int main(){

    int l,b;

    printf("Enter the Length and Breadth:");
    scanf("%d %d",&l,&b);

    // printf("Enter the Breadth:");
    // scanf("%d\n",&b);

    if(l==b){
        printf("\nIt is a square");
    }
    else{
        printf("\nIt is Rectangle");
    }
    return 0;
}