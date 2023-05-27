#include<stdio.h>

// calculating total marks of a student and its percentage

int main(){
    int a=78, b=45, c=62;
    float total = (a+b+c);
    printf("Total marks: %f", total);
    printf("\nPercent of Marks accuired: %f%%", total/300 * 100);
}