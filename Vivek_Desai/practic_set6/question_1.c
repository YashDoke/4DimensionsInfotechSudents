#include<stdio.h>

int main(){

    int num;
    int marks[10];

    printf("Enetr the array values: ");

    for(int i=0;i<10;i++){
        scanf("%d",&marks[i]);
    }

    printf("printing array: ");

    for(int i=0;i<10;i++){
        printf("%d,",marks[i]);
    }
    

    return 0;

}