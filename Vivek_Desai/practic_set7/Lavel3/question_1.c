#include<stdio.h>

int main(){

    int num;

    printf("Enetr the number:");
    scanf("%d",&num);

    int *ptr = &num;

    int a = 1;
    printf("Factorial ");
    for(int i=1;i<=*ptr;i++){
        printf ("%d ",i);
        a *= i;
    }

    printf("\n Value of Factorial: %d",a);


    return 0;
}
