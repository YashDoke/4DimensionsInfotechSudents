#include<stdio.h>

int even_odd(int num){
    if(num % 2 == 0){
        printf("\nIt is even number: %d", num );
    }
    else{
        printf("\nit is odd number: %d",num);
    }

    return 0;
    
}

int main(){

    int a;

    printf("Enetr the number: ");
    scanf("%d",&a);

    even_odd(a);


    return 0;
}