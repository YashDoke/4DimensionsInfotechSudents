#include<stdio.h>

//change length from meter to inch

int main(){
    float len;
    printf("Enter any length in meter: ");
    scanf("%f",&len);
    printf("%.2f in inches is: %.2f",len, len*39.37);
    printf("\n%.2f in feets is: %.2f",len,len*3.28);
    return 0;
}