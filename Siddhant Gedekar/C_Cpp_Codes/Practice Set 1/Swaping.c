#include <stdio.h>

// Swaping two numbers

int main(){
    int a,b;
    printf("Enter two values: ");
    scanf("%d %d",&a,&b);
    printf("Value of a: %d \nValue of b: %d",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nValues swaped\na: %d\nb: %d",a,b);
    return 0;
}