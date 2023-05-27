#include<stdio.h>

int main(){
    // take values
    int a;
    printf("Enter variable values: ");
    scanf("%d",&a);
    int *ptr;
    ptr = &a;
    printf("Address of the pointer: %d\n",&ptr);
    printf("Value of the pointer: %d\n",*ptr);
    printf("Value of variable: %d\n",a);
    printf("Address of the variable: %d\n",&a);
    
    printf("Variable value using pointer: %d\n",*ptr);
    return 0;
}