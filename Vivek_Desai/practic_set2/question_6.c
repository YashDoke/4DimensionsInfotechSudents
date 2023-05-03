#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter Age of 1st Persion:");
    scanf("%d",&a);

    printf("Enter Age of 2nd Persion:");
    scanf("%d",&b);

    printf("Enter Age of 3rd Persion:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("\n1st persion is oldest");
    }

    else if(b>a && b>c){
        printf("\n2nd persion is oldest");
    }

    else{
        printf("\n3rd persion is oldest");
    } 

    if(a<b && a<c){
        printf("\n1st persion is youngest");
    }

    else if(b<a && b<c){
        printf("\n2nd persion is youngest");
    }

    else{
        printf("\n3rd persion is youngest");
    }
    return 0;
}