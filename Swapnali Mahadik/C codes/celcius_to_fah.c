#include <stdio.h>

int main() {
    double temp_in_fahrenheit;
    double temp_in_celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &temp_in_fahrenheit);

    temp_in_celsius = (temp_in_fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temp_in_fahrenheit, temp_in_celsius);

    return 0;
}
