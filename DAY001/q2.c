// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int a, b;

    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display results
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    // To avoid division by zero
    if (b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Quotient = Undefined (division by zero not allowed)\n");

    return 0;
}
