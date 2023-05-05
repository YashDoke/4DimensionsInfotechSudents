#include <stdio.h>
#define METERS_TO_FEET 3.28084
#define METERS_TO_INCHES 39.3701

int main() {
    double length_in_meters;
    double length_in_feet;
    double length_in_inches;

    printf("Enter length in meters: ");
    scanf("%lf", &length_in_meters);

    length_in_feet = length_in_meters * METERS_TO_FEET;
    length_in_inches = length_in_meters * METERS_TO_INCHES;

    printf("%.2f meters is equal to %.2f feet or %.2f inches.\n", length_in_meters, length_in_feet, length_in_inches);

    return 0;
}
