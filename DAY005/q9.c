/* Write a program to calculate simple and compound interest. */
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    float si = (p * r * t) / 100;
    float ci = p * pow((1 + r/100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
