#include<stdio.h>

int main()
{
    float Fahrenheit, celsius;   

    printf("Enter the value:\n");           
    Fahrenheit = 75;
    celsius = (((Fahrenheit-32)*5)/9);

    printf("The value in celsius is:%f" ,celsius);

      return 0;
}