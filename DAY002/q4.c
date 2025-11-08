// Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;

    // Take input from user
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
